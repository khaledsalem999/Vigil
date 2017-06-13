#include "SVMTrainer.h"

SVMTrainer::SVMTrainer(QObject *parent)
	: QObject(parent)
{
}

SVMTrainer::~SVMTrainer()
{

}


void SVMTrainer::initializeSVM(QString posTemp, QString negTemp) {
	std::vector<cv::Mat > pos_lst;
	vector< Mat > full_neg_lst;
	vector< Mat > neg_lst;
	vector< Mat > gradient_lst;
	vector< int > labels;
	std:: string neg= negTemp.toLocal8Bit().constData();
	std::string pos= posTemp.toLocal8Bit().constData();

	load_images(pos, pos_lst);
	cout << "Done loading the positive images." << endl;
	cout << "Labeling images, please wait..." << endl;
	cout << "labels 1" << endl;
	labels.insert(labels.end(), 700, 0);
	cout << "labels 2" << endl;
	labels.insert(labels.end(), 642, 1);
	cout << "labels 3" << endl;
	labels.insert(labels.end(), 384, 2);
	cout << "labels 4" << endl;
	labels.insert(labels.end(), 553, 3);
	//labels.assign(pos_lst.size(), +1);

	const unsigned int old = (unsigned int)labels.size();
	load_images(neg, full_neg_lst);
	cout << "Done loading the negatives images." << endl;
	sample_neg(full_neg_lst, neg_lst, Size(64, 128));
	cout << "Done sampling the negative images." << endl;
	labels.insert(labels.end(), neg_lst.size(), 4);
	cout << "Labeling images, please wait..." << endl;
	
	CV_Assert(old < labels.size());

	cout << "Computing HoG positive features...." << endl;
	compute_hog(pos_lst, gradient_lst, Size(64, 128));
	cout << "Computing HoG negative features...." << endl;
	compute_hog(neg_lst, gradient_lst, Size(64, 128));

	cout << "Generating and saving SVM detector..." << endl;
	vector< Mat > gradListMulti;
	//ifstream features = ;
	train_svm(gradient_lst, labels);

	//test_it(Size(320, 240)); // change with your parameters
}

/*
* Convert training/testing set to be used by OpenCV Machine Learning algorithms.
* TrainData is a matrix of size (#samples x max(#cols,#rows) per samples), in 32FC1.
* Transposition of samples are made if needed.
*/
void SVMTrainer::convert_to_ml(const std::vector< cv::Mat > & train_samples, cv::Mat& trainData)
{
	//--Convert data
	const int rows = (int)train_samples.size();
	const int cols = (int)std::max(train_samples[0].cols, train_samples[0].rows);
	cv::Mat tmp(1, cols, CV_32FC1); //< used for transposition if needed
	trainData = cv::Mat(rows, cols, CV_32FC1);
	vector< Mat >::const_iterator itr = train_samples.begin();
	vector< Mat >::const_iterator end = train_samples.end();
	for (int i = 0; itr != end; ++itr, ++i)
	{
		CV_Assert(itr->cols == 1 ||
			itr->rows == 1);
		if (itr->cols == 1)
		{
			transpose(*(itr), tmp);
			tmp.copyTo(trainData.row(i));
		}
		else if (itr->rows == 1)
		{
			itr->copyTo(trainData.row(i));
		}
	}
}

void SVMTrainer::load_images(const string & filename, vector< Mat > & img_lst)
{
	string line;
	ifstream file;

	file.open(filename);
	if (!file.is_open())
	{
		cerr << "Unable to open the list of images from " << filename << " filename." << endl;
		exit(-1);
	}

	bool end_of_parsing = false;
	while (!end_of_parsing)
	{
		getline(file, line);
		if (line == "") // no more file to read
		{
			end_of_parsing = true;
			break;
		}
		Mat img = imread(line.c_str()); // load the image
		if (img.empty()) // invalid image, just skip it.
			continue;
#ifdef _DEBUG
		//imshow("image", img);
		waitKey(10);
#endif
		img_lst.push_back(img.clone());
	}
}

void SVMTrainer::sample_neg(const vector< Mat > & full_neg_lst, vector< Mat > & neg_lst, const Size & size)
{
	Rect box;
	box.width = size.width;
	box.height = size.height;

	const int size_x = box.width;
	const int size_y = box.height;

	srand((unsigned int)time(NULL));

	vector< Mat >::const_iterator img = full_neg_lst.begin();
	vector< Mat >::const_iterator end = full_neg_lst.end();
	for (; img < end; ++img)
	{
		box.x = rand() % (1);
		box.y = rand() % (1);
		Mat roi = (*img)(box);
		neg_lst.push_back(roi.clone());
#ifdef _DEBUG
		//imshow("img", roi.clone());
		waitKey(10);
#endif
	}
}


void SVMTrainer::compute_hog(const vector< Mat > & img_lst, vector< Mat > & gradient_lst, const Size & size)
{
	HOGDescriptor hog;
	hog.winSize = size;
	Mat gray;
	vector< Point > location;
	vector< float > descriptors;

	vector< Mat >::const_iterator img = img_lst.begin();
	vector< Mat >::const_iterator end = img_lst.end();
	for (; img != end; ++img)
	{
		cvtColor(*img, gray, COLOR_BGR2GRAY);
		hog.compute(gray, descriptors, Size(8, 8), Size(0, 0), location);
		gradient_lst.push_back(Mat(descriptors).clone());
#ifdef _DEBUG
		//imshow("gradient", get_hogdescriptor_visu(img->clone(), descriptors, size));
		waitKey(10);
#endif
	}
}

void SVMTrainer::train_svm(const vector< Mat > & gradient_lst, const vector< int > & labels)
{
	Mat train_data;
	convert_to_ml(gradient_lst, train_data);
	cout << gradient_lst.size() << endl;
	clog << "Start training...";
	Ptr<SVM> svm = SVM::create();
	/* Default values to train SVM */
	//svm->setType(0);
	svm->setCoef0(0.0);
	svm->setDegree(3);
	svm->setTermCriteria(TermCriteria(CV_TERMCRIT_ITER + CV_TERMCRIT_EPS, 1000, 1e-3));
	svm->setGamma(0);
	svm->setKernel(SVM::LINEAR);
	svm->setNu(0.5);
	svm->setP(0.1); // for EPSILON_SVR, epsilon in loss function?
	svm->setC(0.01); // From paper, soft classifier
	svm->setType(SVM::C_SVC); // C_SVC; // EPSILON_SVR; // may be also NU_SVR; // do regression task
	svm->train(train_data, ROW_SAMPLE, Mat(labels));
	clog << "...[done]" << endl;

	svm->save("D://Train//backgroundSubTrainer.yml");
}

void SVMTrainer::draw_locations(Mat & img, const vector< Rect > & locations, const Scalar & color)
{
	if (!locations.empty())
	{
		vector< Rect >::const_iterator loc = locations.begin();
		vector< Rect >::const_iterator end = locations.end();
		for (; loc != end; ++loc)
		{
			rectangle(img, *loc, color, 2);
		}
	}
}