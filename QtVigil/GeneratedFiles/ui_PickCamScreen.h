/********************************************************************************
** Form generated from reading UI file 'PickCamScreenmU3736.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PICKCAMSCREENMU3736_H
#define PICKCAMSCREENMU3736_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PickCamScreen
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *OpenVideo;
    QLineEdit *VideoLocation;
    QPushButton *AddFeed;

    void setupUi(QWidget *PickCamScreen)
    {
        if (PickCamScreen->objectName().isEmpty())
            PickCamScreen->setObjectName(QStringLiteral("PickCamScreen"));
        PickCamScreen->resize(242, 253);
        verticalLayout = new QVBoxLayout(PickCamScreen);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(PickCamScreen);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label);

        comboBox = new QComboBox(PickCamScreen);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        label_2 = new QLabel(PickCamScreen);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(PickCamScreen);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        OpenVideo = new QPushButton(PickCamScreen);
        OpenVideo->setObjectName(QStringLiteral("OpenVideo"));

        verticalLayout->addWidget(OpenVideo);

        VideoLocation = new QLineEdit(PickCamScreen);
        VideoLocation->setObjectName(QStringLiteral("VideoLocation"));
        VideoLocation->setFrame(true);
        VideoLocation->setReadOnly(true);

        verticalLayout->addWidget(VideoLocation);

        AddFeed = new QPushButton(PickCamScreen);
        AddFeed->setObjectName(QStringLiteral("AddFeed"));

        verticalLayout->addWidget(AddFeed);


        retranslateUi(PickCamScreen);

        QMetaObject::connectSlotsByName(PickCamScreen);
    } // setupUi

    void retranslateUi(QWidget *PickCamScreen)
    {
        PickCamScreen->setWindowTitle(QApplication::translate("PickCamScreen", "PickCamScreen", Q_NULLPTR));
        label->setText(QApplication::translate("PickCamScreen", "Select Camera", Q_NULLPTR));
        label_2->setText(QApplication::translate("PickCamScreen", "IP camera", Q_NULLPTR));
        OpenVideo->setText(QApplication::translate("PickCamScreen", "Open Video File", Q_NULLPTR));
        VideoLocation->setText(QString());
        AddFeed->setText(QApplication::translate("PickCamScreen", "Start Camera", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PickCamScreen: public Ui_PickCamScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PICKCAMSCREENMU3736_H
