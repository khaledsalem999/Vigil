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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSlider *horizontalSlider;
    QComboBox *comboBox;
    QSlider *horizontalSlider_4;
    QLabel *label_4;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider_5;
    QSlider *horizontalSlider_6;
    QSlider *horizontalSlider_7;
    QSlider *horizontalSlider_8;
    QSlider *horizontalSlider_9;
    QSlider *horizontalSlider_10;

    void setupUi(QWidget *FeedScreen)
    {
        if (FeedScreen->objectName().isEmpty())
            FeedScreen->setObjectName(QStringLiteral("FeedScreen"));
        FeedScreen->resize(757, 533);
        gridLayout = new QGridLayout(FeedScreen);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(FeedScreen);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 3, 1, 1);

        label_2 = new QLabel(FeedScreen);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAutoFillBackground(true);
        label_2->setFrameShape(QFrame::Box);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 5);

        label_3 = new QLabel(FeedScreen);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 2);

        pushButton = new QPushButton(FeedScreen);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(FeedScreen);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        horizontalSlider = new QSlider(FeedScreen);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 3, 0, 1, 1);

        comboBox = new QComboBox(FeedScreen);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 4, 1, 1);

        horizontalSlider_4 = new QSlider(FeedScreen);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_4, 3, 4, 1, 1);

        label_4 = new QLabel(FeedScreen);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 2, 2, 1, 3);

        horizontalSlider_2 = new QSlider(FeedScreen);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_2, 3, 1, 1, 1);

        horizontalSlider_3 = new QSlider(FeedScreen);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_3, 3, 3, 1, 1);

        horizontalSlider_5 = new QSlider(FeedScreen);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_5, 3, 2, 1, 1);

        horizontalSlider_6 = new QSlider(FeedScreen);
        horizontalSlider_6->setObjectName(QStringLiteral("horizontalSlider_6"));
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_6, 4, 0, 1, 1);

        horizontalSlider_7 = new QSlider(FeedScreen);
        horizontalSlider_7->setObjectName(QStringLiteral("horizontalSlider_7"));
        horizontalSlider_7->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_7, 4, 1, 1, 1);

        horizontalSlider_8 = new QSlider(FeedScreen);
        horizontalSlider_8->setObjectName(QStringLiteral("horizontalSlider_8"));
        horizontalSlider_8->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_8, 4, 2, 1, 1);

        horizontalSlider_9 = new QSlider(FeedScreen);
        horizontalSlider_9->setObjectName(QStringLiteral("horizontalSlider_9"));
        horizontalSlider_9->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_9, 4, 3, 1, 1);

        horizontalSlider_10 = new QSlider(FeedScreen);
        horizontalSlider_10->setObjectName(QStringLiteral("horizontalSlider_10"));
        horizontalSlider_10->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_10, 4, 4, 1, 1);


        retranslateUi(FeedScreen);

        QMetaObject::connectSlotsByName(FeedScreen);
    } // setupUi

    void retranslateUi(QWidget *FeedScreen)
    {
        FeedScreen->setWindowTitle(QApplication::translate("FeedScreen", "FeedScreen", Q_NULLPTR));
        label->setText(QApplication::translate("FeedScreen", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("FeedScreen", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("FeedScreen", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FeedScreen", "PushButton", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FeedScreen", "PushButton", Q_NULLPTR));
        label_4->setText(QApplication::translate("FeedScreen", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FeedScreen: public Ui_FeedScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDSCREEN_H
