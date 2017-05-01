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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FeedScreen
{
public:
    QGridLayout *gridLayout;
    QLabel *FeedView;
    QLabel *CamLabel;

    void setupUi(QWidget *FeedScreen)
    {
        if (FeedScreen->objectName().isEmpty())
            FeedScreen->setObjectName(QStringLiteral("FeedScreen"));
        FeedScreen->resize(359, 283);
        gridLayout = new QGridLayout(FeedScreen);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        FeedView = new QLabel(FeedScreen);
        FeedView->setObjectName(QStringLiteral("FeedView"));
        FeedView->setAutoFillBackground(true);
        FeedView->setFrameShape(QFrame::Box);
        FeedView->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(FeedView, 0, 0, 1, 2);

        CamLabel = new QLabel(FeedScreen);
        CamLabel->setObjectName(QStringLiteral("CamLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CamLabel->sizePolicy().hasHeightForWidth());
        CamLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        CamLabel->setFont(font);
        CamLabel->setAutoFillBackground(true);
        CamLabel->setFrameShape(QFrame::Box);
        CamLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(CamLabel, 1, 0, 1, 2);


        retranslateUi(FeedScreen);

        QMetaObject::connectSlotsByName(FeedScreen);
    } // setupUi

    void retranslateUi(QWidget *FeedScreen)
    {
        FeedScreen->setWindowTitle(QApplication::translate("FeedScreen", "FeedScreen", Q_NULLPTR));
        FeedView->setText(QApplication::translate("FeedScreen", "Camera Output", Q_NULLPTR));
        CamLabel->setText(QApplication::translate("FeedScreen", "Camera Name Label", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FeedScreen: public Ui_FeedScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDSCREEN_H
