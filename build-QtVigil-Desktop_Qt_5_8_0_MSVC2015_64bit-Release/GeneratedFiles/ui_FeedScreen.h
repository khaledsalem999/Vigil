/********************************************************************************
** Form generated from reading UI file 'FeedScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDSCREEN_H
#define UI_FEEDSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FeedScreen
{
public:
    QGridLayout *gridLayout;
    QLabel *FeedView;
    QLabel *label_11;
    QLabel *label_8;
    QLabel *label_5;
    QSlider *horizontalSlider_5;
    QLabel *label_10;
    QLabel *label_13;
    QSlider *WidthSlider;
    QLabel *label_7;
    QSlider *horizontalSlider_3;
    QLabel *label_14;
    QSlider *horizontalSlider_9;
    QSlider *YSlider;
    QSlider *horizontalSlider_8;
    QSlider *horizontalSlider_4;
    QLabel *label_4;
    QLabel *label_12;
    QSlider *HeightSlider;
    QLabel *label_6;
    QSlider *XSlider;
    QLabel *label_3;
    QLabel *label_9;
    QSlider *horizontalSlider_10;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *FeedScreen)
    {
        if (FeedScreen->objectName().isEmpty())
            FeedScreen->setObjectName(QStringLiteral("FeedScreen"));
        FeedScreen->resize(683, 573);
        gridLayout = new QGridLayout(FeedScreen);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        FeedView = new QLabel(FeedScreen);
        FeedView->setObjectName(QStringLiteral("FeedView"));
        FeedView->setAutoFillBackground(true);
        FeedView->setFrameShape(QFrame::Box);
        FeedView->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(FeedView, 1, 0, 1, 5);

        label_11 = new QLabel(FeedScreen);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 6, 1, 1, 1);

        label_8 = new QLabel(FeedScreen);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 3, 3, 1, 1);

        label_5 = new QLabel(FeedScreen);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        horizontalSlider_5 = new QSlider(FeedScreen);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_5, 5, 2, 1, 1);

        label_10 = new QLabel(FeedScreen);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 6, 0, 1, 1);

        label_13 = new QLabel(FeedScreen);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_13, 6, 3, 1, 1);

        WidthSlider = new QSlider(FeedScreen);
        WidthSlider->setObjectName(QStringLiteral("WidthSlider"));
        WidthSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(WidthSlider, 7, 0, 1, 1);

        label_7 = new QLabel(FeedScreen);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 3, 2, 1, 1);

        horizontalSlider_3 = new QSlider(FeedScreen);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_3, 5, 3, 1, 1);

        label_14 = new QLabel(FeedScreen);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_14, 6, 4, 1, 1);

        horizontalSlider_9 = new QSlider(FeedScreen);
        horizontalSlider_9->setObjectName(QStringLiteral("horizontalSlider_9"));
        horizontalSlider_9->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_9, 7, 3, 1, 1);

        YSlider = new QSlider(FeedScreen);
        YSlider->setObjectName(QStringLiteral("YSlider"));
        YSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(YSlider, 5, 1, 1, 1);

        horizontalSlider_8 = new QSlider(FeedScreen);
        horizontalSlider_8->setObjectName(QStringLiteral("horizontalSlider_8"));
        horizontalSlider_8->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_8, 7, 2, 1, 1);

        horizontalSlider_4 = new QSlider(FeedScreen);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_4, 5, 4, 1, 1);

        label_4 = new QLabel(FeedScreen);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setAutoFillBackground(true);
        label_4->setFrameShape(QFrame::Box);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 2, 2, 1, 3);

        label_12 = new QLabel(FeedScreen);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_12, 6, 2, 1, 1);

        HeightSlider = new QSlider(FeedScreen);
        HeightSlider->setObjectName(QStringLiteral("HeightSlider"));
        HeightSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HeightSlider, 7, 1, 1, 1);

        label_6 = new QLabel(FeedScreen);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 3, 1, 1, 1);

        XSlider = new QSlider(FeedScreen);
        XSlider->setObjectName(QStringLiteral("XSlider"));
        XSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(XSlider, 5, 0, 1, 1);

        label_3 = new QLabel(FeedScreen);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);
        label_3->setAutoFillBackground(true);
        label_3->setFrameShape(QFrame::Box);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 2);

        label_9 = new QLabel(FeedScreen);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 3, 4, 1, 1);

        horizontalSlider_10 = new QSlider(FeedScreen);
        horizontalSlider_10->setObjectName(QStringLiteral("horizontalSlider_10"));
        horizontalSlider_10->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_10, 7, 4, 1, 1);

        comboBox = new QComboBox(FeedScreen);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 4, 1, 1);

        label = new QLabel(FeedScreen);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(FeedScreen);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton = new QPushButton(FeedScreen);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);


        retranslateUi(FeedScreen);

        QMetaObject::connectSlotsByName(FeedScreen);
    } // setupUi

    void retranslateUi(QWidget *FeedScreen)
    {
        FeedScreen->setWindowTitle(QApplication::translate("FeedScreen", "FeedScreen", Q_NULLPTR));
        FeedView->setText(QApplication::translate("FeedScreen", "Camera Output", Q_NULLPTR));
        label_11->setText(QApplication::translate("FeedScreen", "Height", Q_NULLPTR));
        label_8->setText(QApplication::translate("FeedScreen", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("FeedScreen", "X", Q_NULLPTR));
        label_10->setText(QApplication::translate("FeedScreen", "Width", Q_NULLPTR));
        label_13->setText(QApplication::translate("FeedScreen", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("FeedScreen", "TextLabel", Q_NULLPTR));
        label_14->setText(QApplication::translate("FeedScreen", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("FeedScreen", "HOG", Q_NULLPTR));
        label_12->setText(QApplication::translate("FeedScreen", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("FeedScreen", "Y", Q_NULLPTR));
        label_3->setText(QApplication::translate("FeedScreen", "Region of interest", Q_NULLPTR));
        label_9->setText(QApplication::translate("FeedScreen", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("FeedScreen", "Region of interest :", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FeedScreen", "Reset Parameters", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FeedScreen", "Add new region", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FeedScreen: public Ui_FeedScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDSCREEN_H
