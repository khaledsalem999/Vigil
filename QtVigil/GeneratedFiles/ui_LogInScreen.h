/********************************************************************************
** Form generated from reading UI file 'LogInScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogInScreen
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *LogInScreen)
    {
        if (LogInScreen->objectName().isEmpty())
            LogInScreen->setObjectName(QStringLiteral("LogInScreen"));
        LogInScreen->resize(383, 205);
        LogInScreen->setAutoFillBackground(false);
        gridLayout = new QGridLayout(LogInScreen);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit_2 = new QLineEdit(LogInScreen);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 2, 0, 1, 1);

        label_2 = new QLabel(LogInScreen);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        lineEdit = new QLineEdit(LogInScreen);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 5, 0, 1, 1);

        label = new QLabel(LogInScreen);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        pushButton = new QPushButton(LogInScreen);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 6, 0, 1, 1);


        retranslateUi(LogInScreen);

        QMetaObject::connectSlotsByName(LogInScreen);
    } // setupUi

    void retranslateUi(QWidget *LogInScreen)
    {
        LogInScreen->setWindowTitle(QApplication::translate("LogInScreen", "LogInScreen", Q_NULLPTR));
        label_2->setText(QApplication::translate("LogInScreen", "Password", Q_NULLPTR));
        label->setText(QApplication::translate("LogInScreen", "Username", Q_NULLPTR));
        pushButton->setText(QApplication::translate("LogInScreen", "Log In", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogInScreen: public Ui_LogInScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
