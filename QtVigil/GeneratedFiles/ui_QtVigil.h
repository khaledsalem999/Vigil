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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtVigilClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *NegativeTrain;
    QPushButton *AddCam;
    QPushButton *PostiveTrain;
    QPushButton *StartTrain;
    QLabel *label;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtVigilClass)
    {
        if (QtVigilClass->objectName().isEmpty())
            QtVigilClass->setObjectName(QStringLiteral("QtVigilClass"));
        QtVigilClass->resize(1255, 781);
        centralWidget = new QWidget(QtVigilClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        NegativeTrain = new QPushButton(centralWidget);
        NegativeTrain->setObjectName(QStringLiteral("NegativeTrain"));

        gridLayout->addWidget(NegativeTrain, 2, 4, 1, 1);

        AddCam = new QPushButton(centralWidget);
        AddCam->setObjectName(QStringLiteral("AddCam"));

        gridLayout->addWidget(AddCam, 2, 2, 1, 1);

        PostiveTrain = new QPushButton(centralWidget);
        PostiveTrain->setObjectName(QStringLiteral("PostiveTrain"));

        gridLayout->addWidget(PostiveTrain, 2, 3, 1, 1);

        StartTrain = new QPushButton(centralWidget);
        StartTrain->setObjectName(QStringLiteral("StartTrain"));

        gridLayout->addWidget(StartTrain, 2, 5, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 6, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));

        gridLayout->addLayout(gridLayout_3, 0, 2, 2, 4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));

        gridLayout->addLayout(gridLayout_2, 1, 6, 2, 1);

        QtVigilClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtVigilClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1255, 26));
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
        NegativeTrain->setText(QApplication::translate("QtVigilClass", "Select Negative Training Files", Q_NULLPTR));
        AddCam->setText(QApplication::translate("QtVigilClass", "Add Camera", Q_NULLPTR));
        PostiveTrain->setText(QApplication::translate("QtVigilClass", "Select Postive Training Files", Q_NULLPTR));
        StartTrain->setText(QApplication::translate("QtVigilClass", "StartTraining", Q_NULLPTR));
        label->setText(QApplication::translate("QtVigilClass", "Anomalies Detected", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtVigilClass: public Ui_QtVigilClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTVIGIL_H
