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
    QLabel *label_3;
    QPushButton *AddCam;
    QLabel *label;
    QPushButton *OpenFace;
    QPushButton *pushButton;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtVigilClass)
    {
        if (QtVigilClass->objectName().isEmpty())
            QtVigilClass->setObjectName(QStringLiteral("QtVigilClass"));
        QtVigilClass->resize(951, 578);
        centralWidget = new QWidget(QtVigilClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 7, 1, 1);

        AddCam = new QPushButton(centralWidget);
        AddCam->setObjectName(QStringLiteral("AddCam"));

        gridLayout->addWidget(AddCam, 0, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 5, 1, 1);

        OpenFace = new QPushButton(centralWidget);
        OpenFace->setObjectName(QStringLiteral("OpenFace"));

        gridLayout->addWidget(OpenFace, 0, 3, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 4, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 6, 1, 1);

        QtVigilClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtVigilClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 951, 26));
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
        label_3->setText(QApplication::translate("QtVigilClass", "TextLabel", Q_NULLPTR));
        AddCam->setText(QApplication::translate("QtVigilClass", "Add Camera", Q_NULLPTR));
        label->setText(QApplication::translate("QtVigilClass", "TextLabel", Q_NULLPTR));
        OpenFace->setText(QApplication::translate("QtVigilClass", "View Face anom", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QtVigilClass", "PushButton", Q_NULLPTR));
        label_2->setText(QApplication::translate("QtVigilClass", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtVigilClass: public Ui_QtVigilClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTVIGIL_H
