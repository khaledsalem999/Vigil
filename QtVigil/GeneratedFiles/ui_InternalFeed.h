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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InternalFeed
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *IntCam;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *InternalCam;
    QLabel *CamName;

    void setupUi(QWidget *InternalFeed)
    {
        if (InternalFeed->objectName().isEmpty())
            InternalFeed->setObjectName(QStringLiteral("InternalFeed"));
        InternalFeed->resize(505, 354);
        verticalLayout = new QVBoxLayout(InternalFeed);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        IntCam = new QWidget(InternalFeed);
        IntCam->setObjectName(QStringLiteral("IntCam"));
        gridLayoutWidget = new QWidget(IntCam);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(2, 0, 481, 331));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        InternalCam = new QLabel(gridLayoutWidget);
        InternalCam->setObjectName(QStringLiteral("InternalCam"));
        InternalCam->setFrameShape(QFrame::Box);
        InternalCam->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(InternalCam, 0, 0, 1, 1);

        CamName = new QLabel(gridLayoutWidget);
        CamName->setObjectName(QStringLiteral("CamName"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CamName->sizePolicy().hasHeightForWidth());
        CamName->setSizePolicy(sizePolicy);
        CamName->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(CamName, 1, 0, 1, 1);


        verticalLayout->addWidget(IntCam);


        retranslateUi(InternalFeed);

        QMetaObject::connectSlotsByName(InternalFeed);
    } // setupUi

    void retranslateUi(QWidget *InternalFeed)
    {
        InternalFeed->setWindowTitle(QApplication::translate("InternalFeed", "InternalFeed", Q_NULLPTR));
        InternalCam->setText(QApplication::translate("InternalFeed", "TextLabel", Q_NULLPTR));
        CamName->setText(QApplication::translate("InternalFeed", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InternalFeed: public Ui_InternalFeed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERNALFEED_H
