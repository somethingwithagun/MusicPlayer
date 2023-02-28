/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QToolButton *openDir_btn;
    QSpacerItem *horizontalSpacer;
    QToolButton *exitDir_btn;
    QLabel *currentSong_label;
    QVBoxLayout *verticalLayout_2;
    QSlider *duration_slider;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *prev_btn;
    QToolButton *play_btn;
    QToolButton *next_btn;
    QSpacerItem *horizontalSpacer_2;
    QLabel *volume_label;
    QSlider *volume_slider;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName("MainWindowClass");
        MainWindowClass->resize(361, 425);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowClass->sizePolicy().hasHeightForWidth());
        MainWindowClass->setSizePolicy(sizePolicy);
        MainWindowClass->setMinimumSize(QSize(300, 425));
        MainWindowClass->setMaximumSize(QSize(583, 425));
        MainWindowClass->setAutoFillBackground(false);
        MainWindowClass->setStyleSheet(QString::fromUtf8(""));
        MainWindowClass->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindowClass->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName("centralWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        centralWidget->setAutoFillBackground(false);
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        openDir_btn = new QToolButton(centralWidget);
        openDir_btn->setObjectName("openDir_btn");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/images/openDir_btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        openDir_btn->setIcon(icon);
        openDir_btn->setIconSize(QSize(32, 32));
        openDir_btn->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout->addWidget(openDir_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        exitDir_btn = new QToolButton(centralWidget);
        exitDir_btn->setObjectName("exitDir_btn");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/images/exitDir_btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitDir_btn->setIcon(icon1);
        exitDir_btn->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(exitDir_btn);


        verticalLayout_3->addLayout(horizontalLayout);

        currentSong_label = new QLabel(centralWidget);
        currentSong_label->setObjectName("currentSong_label");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        currentSong_label->setFont(font);
        currentSong_label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(currentSong_label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        duration_slider = new QSlider(centralWidget);
        duration_slider->setObjectName("duration_slider");
        duration_slider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(duration_slider);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        prev_btn = new QToolButton(centralWidget);
        prev_btn->setObjectName("prev_btn");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/images/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        prev_btn->setIcon(icon2);
        prev_btn->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(prev_btn);

        play_btn = new QToolButton(centralWidget);
        play_btn->setObjectName("play_btn");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/images/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        play_btn->setIcon(icon3);
        play_btn->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(play_btn);

        next_btn = new QToolButton(centralWidget);
        next_btn->setObjectName("next_btn");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/images/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        next_btn->setIcon(icon4);
        next_btn->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(next_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        volume_label = new QLabel(centralWidget);
        volume_label->setObjectName("volume_label");

        horizontalLayout_2->addWidget(volume_label);

        volume_slider = new QSlider(centralWidget);
        volume_slider->setObjectName("volume_slider");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(volume_slider->sizePolicy().hasHeightForWidth());
        volume_slider->setSizePolicy(sizePolicy2);
        volume_slider->setMaximum(100);
        volume_slider->setSingleStep(1);
        volume_slider->setOrientation(Qt::Horizontal);
        volume_slider->setTickPosition(QSlider::NoTicks);

        horizontalLayout_2->addWidget(volume_slider);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        MainWindowClass->setCentralWidget(centralWidget);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "Music Player", nullptr));
        openDir_btn->setText(QString());
        exitDir_btn->setText(QString());
        currentSong_label->setText(QCoreApplication::translate("MainWindowClass", "Now playing: ", nullptr));
        prev_btn->setText(QString());
        play_btn->setText(QCoreApplication::translate("MainWindowClass", "P", nullptr));
        next_btn->setText(QString());
        volume_label->setText(QCoreApplication::translate("MainWindowClass", "Volume", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
