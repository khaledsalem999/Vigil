#pragma once

#include <QObject>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace cv::ml;
using namespace std;

class SVMTrainer : public QObject
{
	Q_OBJECT

public:
	SVMTrainer(QObject *parent);
	~SVMTrainer();
	void initializeSVM(QString posTemp, QString negTemp);
	void get_svm_detector(const Ptr<SVM>& svm, vector<float>& hog_detector);
	void convert_to_ml(const std::vector<cv::Mat>& train_samples, cv::Mat & trainData);
	void load_images(const string & filename, vector<Mat>& img_lst);
	void sample_neg(const vector<Mat>& full_neg_lst, vector<Mat>& neg_lst, const Size & size);
	Mat get_hogdescriptor_visu(const Mat & color_origImg, vector<float>& descriptorValues, const Size & size);
	void compute_hog(const vector<Mat>& img_lst, vector<Mat>& gradient_lst, const Size & size);
	void train_svm(const vector<Mat>& gradient_lst, const vector<int>& labels);
	void draw_locations(Mat & img, const vector<Rect>& locations, const Scalar & color);
};
