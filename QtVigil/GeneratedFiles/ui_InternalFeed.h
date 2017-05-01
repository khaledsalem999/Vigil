/********************************************************************************
** Form generated from reading UI file 'InternalFeed.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERNALFEED_H
#define UI_INTERNALFEED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InternalFeed
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *CameraView;
    QLabel *CamName;

    void setupUi(QWidget *InternalFeed)
    {
        if (InternalFeed->objectName().isEmpty())
            InternalFeed->setObjectName(QStringLiteral("InternalFeed"));
        InternalFeed->resize(327, 293);
        verticalLayout = new QVBoxLayout(InternalFeed);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        CameraView = new QLabel(InternalFeed);
        CameraView->setObjectName(QStringLiteral("CameraView"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        CameraView->setFont(font);
        CameraView->setAutoFillBackground(true);
        CameraView->setFrameShape(QFrame::Box);
        CameraView->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(CameraView);

        CamName = new QLabel(InternalFeed);
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


        retranslateUi(InternalFeed);

        QMetaObject::connectSlotsByName(InternalFeed);
    } // setupUi

    void retranslateUi(QWidget *InternalFeed)
    {
        InternalFeed->setWindowTitle(QApplication::translate("InternalFeed", "Form", Q_NULLPTR));
        CameraView->setText(QApplication::translate("InternalFeed", "Camera View", Q_NULLPTR));
        CamName->setText(QApplication::translate("InternalFeed", "Camera Name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InternalFeed: public Ui_InternalFeed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERNALFEED_H
