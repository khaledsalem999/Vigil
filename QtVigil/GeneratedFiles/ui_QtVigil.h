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
#include <QtWidgets/QHBoxLayout>
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
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
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
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 419, 951, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAutoFillBackground(false);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

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
        pushButton_2->setText(QApplication::translate("QtVigilClass", "PushButton", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QtVigilClass", "PushButton", Q_NULLPTR));
        label_2->setText(QApplication::translate("QtVigilClass", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("QtVigilClass", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("QtVigilClass", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtVigilClass: public Ui_QtVigilClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTVIGIL_H
