/********************************************************************************
** Form generated from reading UI file 'InternalFeedae7596.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef INTERNALFEEDAE7596_H
#define INTERNALFEEDAE7596_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *CameraView;
    QLabel *CamName;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(327, 293);
        verticalLayout = new QVBoxLayout(Form);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        CameraView = new QLabel(Form);
        CameraView->setObjectName(QStringLiteral("CameraView"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        CameraView->setFont(font);
        CameraView->setAutoFillBackground(true);
        CameraView->setFrameShape(QFrame::Box);
        CameraView->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(CameraView);

        CamName = new QLabel(Form);
        CamName->setObjectName(QStringLiteral("CamName"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CamName->sizePolicy().hasHeightForWidth());
        CamName->setSizePolicy(sizePolicy);
        CamName->setFont(font);
        CamName->setFrameShape(QFrame::Box);
        CamName->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(CamName);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", Q_NULLPTR));
        CameraView->setText(QApplication::translate("Form", "Camera View", Q_NULLPTR));
        CamName->setText(QApplication::translate("Form", "Camera Name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // INTERNALFEEDAE7596_H
