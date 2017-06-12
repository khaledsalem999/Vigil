/********************************************************************************
** Form generated from reading UI file 'QtVigil.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTVIGIL_H
#define UI_QTVIGIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtVigilClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *StartTrain;
    QPushButton *NegativeTrain;
    QPushButton *PostiveTrain;
    QLabel *label;
    QLabel *label_2;
    QPushButton *RemoveCam;
    QPushButton *AddCam;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *CamViewReg;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_10;
    QGridLayout *AnomViewReg;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtVigilClass)
    {
        if (QtVigilClass->objectName().isEmpty())
            QtVigilClass->setObjectName(QStringLiteral("QtVigilClass"));
        QtVigilClass->resize(947, 642);
        centralWidget = new QWidget(QtVigilClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        StartTrain = new QPushButton(centralWidget);
        StartTrain->setObjectName(QStringLiteral("StartTrain"));

        gridLayout->addWidget(StartTrain, 2, 6, 1, 1);

        NegativeTrain = new QPushButton(centralWidget);
        NegativeTrain->setObjectName(QStringLiteral("NegativeTrain"));

        gridLayout->addWidget(NegativeTrain, 2, 5, 1, 1);

        PostiveTrain = new QPushButton(centralWidget);
        PostiveTrain->setObjectName(QStringLiteral("PostiveTrain"));

        gridLayout->addWidget(PostiveTrain, 2, 4, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 6, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 2, 1, 4);

        RemoveCam = new QPushButton(centralWidget);
        RemoveCam->setObjectName(QStringLiteral("RemoveCam"));

        gridLayout->addWidget(RemoveCam, 2, 3, 1, 1);

        AddCam = new QPushButton(centralWidget);
        AddCam->setObjectName(QStringLiteral("AddCam"));

        gridLayout->addWidget(AddCam, 2, 2, 1, 1);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 737, 495));
        CamViewReg = new QGridLayout(scrollAreaWidgetContents_3);
        CamViewReg->setSpacing(6);
        CamViewReg->setContentsMargins(11, 11, 11, 11);
        CamViewReg->setObjectName(QStringLiteral("CamViewReg"));
        scrollArea->setWidget(scrollAreaWidgetContents_3);

        gridLayout->addWidget(scrollArea, 1, 2, 1, 4);

        scrollArea_2 = new QScrollArea(centralWidget);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea_2->sizePolicy().hasHeightForWidth());
        scrollArea_2->setSizePolicy(sizePolicy1);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_10 = new QWidget();
        scrollAreaWidgetContents_10->setObjectName(QStringLiteral("scrollAreaWidgetContents_10"));
        scrollAreaWidgetContents_10->setGeometry(QRect(0, 0, 177, 495));
        AnomViewReg = new QGridLayout(scrollAreaWidgetContents_10);
        AnomViewReg->setSpacing(6);
        AnomViewReg->setContentsMargins(11, 11, 11, 11);
        AnomViewReg->setObjectName(QStringLiteral("AnomViewReg"));
        scrollArea_2->setWidget(scrollAreaWidgetContents_10);

        gridLayout->addWidget(scrollArea_2, 1, 6, 1, 1);

        QtVigilClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtVigilClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 947, 26));
        QtVigilClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtVigilClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtVigilClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtVigilClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtVigilClass->setStatusBar(statusBar);

        retranslateUi(QtVigilClass);

        QMetaObject::connectSlotsByName(QtVigilClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtVigilClass)
    {
        QtVigilClass->setWindowTitle(QApplication::translate("QtVigilClass", "QtVigil", Q_NULLPTR));
        StartTrain->setText(QApplication::translate("QtVigilClass", "Start Training", Q_NULLPTR));
        NegativeTrain->setText(QApplication::translate("QtVigilClass", "Select Negative Training Files", Q_NULLPTR));
        PostiveTrain->setText(QApplication::translate("QtVigilClass", "Select Postive Training Files", Q_NULLPTR));
        label->setText(QApplication::translate("QtVigilClass", "Anomalies Detected", Q_NULLPTR));
        label_2->setText(QApplication::translate("QtVigilClass", "Cameras Region", Q_NULLPTR));
        RemoveCam->setText(QApplication::translate("QtVigilClass", "Remove Camera", Q_NULLPTR));
        AddCam->setText(QApplication::translate("QtVigilClass", "Add Camera", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtVigilClass: public Ui_QtVigilClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTVIGIL_H
