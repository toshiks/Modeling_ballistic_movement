/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Graphic_widget/GraphWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayoutApp;
    QLabel *labelTitleProgramm;
    QHBoxLayout *horizontalLayoutWorkPart;
    QVBoxLayout *verticalLayoutControl;
    QHBoxLayout *horizontalLayoutTime;
    QLabel *label_11;
    QLabel *labelCurrentTime;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioAsphalt;
    QRadioButton *radioGrass;
    QRadioButton *radioSand;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QSlider *horizontalSliderSpeed;
    QLabel *labelValueSpeed;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QSlider *horizontalSliderWeight;
    QLabel *labelValueWeight;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSliderAngle;
    QLabel *labelValueAngle;
    QPushButton *startButton;
    QHBoxLayout *horizontalLayoutCombinateGraph;
    QVBoxLayout *verticalLayoutGraphicsForX;
    QVBoxLayout *verticalLayoutGraphSpeedX;
    QLabel *label_4;
    QHBoxLayout *horizontalLayoutSpeedX;
    QLabel *label_12;
    QLabel *labelSpeedX;
    GraphWidget *widgetSpeedX;
    QVBoxLayout *verticalLayoutGraphCoordX;
    QLabel *label_5;
    QHBoxLayout *horizontalLayoutCoordX;
    QLabel *label_15;
    QLabel *labelCoordX;
    GraphWidget *widgetCoordX;
    QVBoxLayout *verticalLayoutGraphEnergyX;
    QLabel *label_6;
    QHBoxLayout *horizontalLayoutEnergyX;
    QLabel *label_16;
    QLabel *labelEnergyX;
    GraphWidget *widgetEnergyX;
    QVBoxLayout *verticalLayoutGraphicsForY;
    QVBoxLayout *verticalLayoutGraphSpeedY;
    QLabel *label_7;
    QHBoxLayout *horizontalLayoutSpeedY;
    QLabel *label_13;
    QLabel *labelSpeedY;
    GraphWidget *widgetSpeedY;
    QVBoxLayout *verticalLayoutGraphCoordY;
    QLabel *label_8;
    QHBoxLayout *horizontalLayoutCoordY;
    QLabel *label_14;
    QLabel *labelCoordY;
    GraphWidget *widgetCoordY;
    QVBoxLayout *verticalLayoutGraphEnergyY;
    QLabel *label_9;
    QHBoxLayout *horizontalLayoutEnergyY;
    QLabel *label_17;
    QLabel *labelEnergyY;
    GraphWidget *widgetEnergyY;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(889, 499);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setWindowOpacity(1);
        MainWindow->setToolTipDuration(-1);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setToolTipDuration(-1);
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        centralWidget->setAutoFillBackground(false);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayoutApp = new QVBoxLayout();
        verticalLayoutApp->setSpacing(6);
        verticalLayoutApp->setObjectName(QStringLiteral("verticalLayoutApp"));
        labelTitleProgramm = new QLabel(centralWidget);
        labelTitleProgramm->setObjectName(QStringLiteral("labelTitleProgramm"));
        labelTitleProgramm->setMaximumSize(QSize(16777215, 40));
        labelTitleProgramm->setAlignment(Qt::AlignCenter);

        verticalLayoutApp->addWidget(labelTitleProgramm);

        horizontalLayoutWorkPart = new QHBoxLayout();
        horizontalLayoutWorkPart->setSpacing(6);
        horizontalLayoutWorkPart->setObjectName(QStringLiteral("horizontalLayoutWorkPart"));
        verticalLayoutControl = new QVBoxLayout();
        verticalLayoutControl->setSpacing(6);
        verticalLayoutControl->setObjectName(QStringLiteral("verticalLayoutControl"));
        horizontalLayoutTime = new QHBoxLayout();
        horizontalLayoutTime->setSpacing(6);
        horizontalLayoutTime->setObjectName(QStringLiteral("horizontalLayoutTime"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayoutTime->addWidget(label_11);

        labelCurrentTime = new QLabel(centralWidget);
        labelCurrentTime->setObjectName(QStringLiteral("labelCurrentTime"));

        horizontalLayoutTime->addWidget(labelCurrentTime);


        verticalLayoutControl->addLayout(horizontalLayoutTime);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutControl->addItem(verticalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        radioAsphalt = new QRadioButton(centralWidget);
        radioAsphalt->setObjectName(QStringLiteral("radioAsphalt"));
        radioAsphalt->setEnabled(true);
        radioAsphalt->setMaximumSize(QSize(100, 30));
        radioAsphalt->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 23px;\n"
"    height: 23px;\n"
"margin: 2px 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"   background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(189, 189, 189, 0), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(189, 189, 189, 255), stop:0.573864 rgba(189, 189, 189, 255), stop:0.630682 rgba(255, 255, 255, 0));\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover {\n"
" background:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(189, 189, 189, 0), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(189, 189, 189, 255), stop:0.573864 rgba(189, 189, 189, 255), stop:0.630682 rgba(189, 189, 189, 60), stop:1 rgba(189, 189, 189, 60));\n"
"border-radius: 11px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:pressed {\n"
" background:qradialgradient(spread:pad, cx:0.5, cy:0.5, radi"
                        "us:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(224, 224, 224, 0), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(224, 224, 224, 255), stop:0.573864 rgba(41, 182, 246, 255), stop:0.630682 rgba(224, 224, 224, 80), stop:1 rgba(224, 224, 224, 80));\n"
"border-radius: 11px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:disabled {\n"
" background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(159, 159, 159, 0), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(159, 159, 159, 255), stop:0.573864 rgba(159, 159, 159, 255), stop:0.630682 rgba(255, 255, 255, 0));\n"
"border-radius: 11px;\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"   background:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(41, 182, 246, 255), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(41, 182, 246, 255), stop:0.573"
                        "864 rgba(41, 182, 246, 255), stop:0.630682 rgba(255, 255, 255, 0));\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover {\n"
"   background:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(41, 182, 246, 255), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(41, 182, 246, 255), stop:0.573864 rgba(41, 182, 246, 255), stop:0.630682 rgba(41, 182, 246, 60), stop:1 rgba(41, 182, 246, 60));\n"
"border-radius: 11px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:pressed {\n"
" background:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(41, 182, 246, 255), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(41, 182, 246, 255), stop:0.573864 rgba(41, 182, 246, 255), stop:0.630682 rgba(41, 182, 246, 80), stop:1 rgba(41, 182, 246, 80));\n"
"border-radius: 11px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:disabled {\n"
" background: qradialgradient("
                        "spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(159, 159, 159, 255), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(159, 159, 159, 255), stop:0.573864 rgba(159, 159, 159, 255), stop:0.630682 rgba(255, 255, 255, 0));\n"
"border-radius: 11px;\n"
"}"));
        radioAsphalt->setChecked(true);

        verticalLayout_4->addWidget(radioAsphalt);

        radioGrass = new QRadioButton(centralWidget);
        radioGrass->setObjectName(QStringLiteral("radioGrass"));
        radioGrass->setMaximumSize(QSize(100, 30));
        radioGrass->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 23px;\n"
"    height: 23px;\n"
"margin: 2px 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"   background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(189, 189, 189, 0), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(189, 189, 189, 255), stop:0.573864 rgba(189, 189, 189, 255), stop:0.630682 rgba(255, 255, 255, 0));\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover {\n"
" background:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(189, 189, 189, 0), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(189, 189, 189, 255), stop:0.573864 rgba(189, 189, 189, 255), stop:0.630682 rgba(189, 189, 189, 60), stop:1 rgba(189, 189, 189, 60));\n"
"border-radius: 11px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:pressed {\n"
" background:qradialgradient(spread:pad, cx:0.5, cy:0.5, radi"
                        "us:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(224, 224, 224, 0), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(224, 224, 224, 255), stop:0.573864 rgba(41, 182, 246, 255), stop:0.630682 rgba(224, 224, 224, 80), stop:1 rgba(224, 224, 224, 80));\n"
"border-radius: 11px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:disabled {\n"
" background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(159, 159, 159, 0), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(159, 159, 159, 255), stop:0.573864 rgba(159, 159, 159, 255), stop:0.630682 rgba(255, 255, 255, 0));\n"
"border-radius: 11px;\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"   background:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(41, 182, 246, 255), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(41, 182, 246, 255), stop:0.573"
                        "864 rgba(41, 182, 246, 255), stop:0.630682 rgba(255, 255, 255, 0));\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover {\n"
"   background:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(41, 182, 246, 255), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(41, 182, 246, 255), stop:0.573864 rgba(41, 182, 246, 255), stop:0.630682 rgba(41, 182, 246, 60), stop:1 rgba(41, 182, 246, 60));\n"
"border-radius: 11px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:pressed {\n"
" background:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(41, 182, 246, 255), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(41, 182, 246, 255), stop:0.573864 rgba(41, 182, 246, 255), stop:0.630682 rgba(41, 182, 246, 80), stop:1 rgba(41, 182, 246, 80));\n"
"border-radius: 11px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:disabled {\n"
" background: qradialgradient("
                        "spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(159, 159, 159, 255), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(159, 159, 159, 255), stop:0.573864 rgba(159, 159, 159, 255), stop:0.630682 rgba(255, 255, 255, 0));\n"
"border-radius: 11px;\n"
"}"));
        radioGrass->setChecked(false);

        verticalLayout_4->addWidget(radioGrass);

        radioSand = new QRadioButton(centralWidget);
        radioSand->setObjectName(QStringLiteral("radioSand"));
        radioSand->setMaximumSize(QSize(100, 30));
        radioSand->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 23px;\n"
"    height: 23px;\n"
"margin: 2px 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked {\n"
"   background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(189, 189, 189, 0), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(189, 189, 189, 255), stop:0.573864 rgba(189, 189, 189, 255), stop:0.630682 rgba(255, 255, 255, 0));\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover {\n"
" background:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(189, 189, 189, 0), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(189, 189, 189, 255), stop:0.573864 rgba(189, 189, 189, 255), stop:0.630682 rgba(189, 189, 189, 60), stop:1 rgba(189, 189, 189, 60));\n"
"border-radius: 11px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:pressed {\n"
" background:qradialgradient(spread:pad, cx:0.5, cy:0.5, radi"
                        "us:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(224, 224, 224, 0), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(224, 224, 224, 255), stop:0.573864 rgba(41, 182, 246, 255), stop:0.630682 rgba(224, 224, 224, 80), stop:1 rgba(224, 224, 224, 80));\n"
"border-radius: 11px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:disabled {\n"
" background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(159, 159, 159, 0), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(159, 159, 159, 255), stop:0.573864 rgba(159, 159, 159, 255), stop:0.630682 rgba(255, 255, 255, 0));\n"
"border-radius: 11px;\n"
"}\n"
"\n"
"QRadioButton::indicator::checked {\n"
"   background:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(41, 182, 246, 255), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(41, 182, 246, 255), stop:0.573"
                        "864 rgba(41, 182, 246, 255), stop:0.630682 rgba(255, 255, 255, 0));\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover {\n"
"   background:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(41, 182, 246, 255), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(41, 182, 246, 255), stop:0.573864 rgba(41, 182, 246, 255), stop:0.630682 rgba(41, 182, 246, 60), stop:1 rgba(41, 182, 246, 60));\n"
"border-radius: 11px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:pressed {\n"
" background:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(41, 182, 246, 255), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(41, 182, 246, 255), stop:0.573864 rgba(41, 182, 246, 255), stop:0.630682 rgba(41, 182, 246, 80), stop:1 rgba(41, 182, 246, 80));\n"
"border-radius: 11px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:disabled {\n"
" background: qradialgradient("
                        "spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.227273 rgba(159, 159, 159, 255), stop:0.289773 rgba(255, 255, 255, 0), stop:0.397727 rgba(255, 255, 255, 0), stop:0.420455 rgba(159, 159, 159, 255), stop:0.573864 rgba(159, 159, 159, 255), stop:0.630682 rgba(255, 255, 255, 0));\n"
"border-radius: 11px;\n"
"}"));

        verticalLayout_4->addWidget(radioSand);


        verticalLayoutControl->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(250, 30));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSliderSpeed = new QSlider(centralWidget);
        horizontalSliderSpeed->setObjectName(QStringLiteral("horizontalSliderSpeed"));
        horizontalSliderSpeed->setEnabled(true);
        horizontalSliderSpeed->setMaximumSize(QSize(200, 16777215));
        horizontalSliderSpeed->setContextMenuPolicy(Qt::NoContextMenu);
        horizontalSliderSpeed->setAcceptDrops(false);
        horizontalSliderSpeed->setToolTipDuration(-1);
        horizontalSliderSpeed->setLayoutDirection(Qt::LeftToRight);
        horizontalSliderSpeed->setStyleSheet(QLatin1String("QSlider{\n"
"padding-right: 10px;\n"
"padding-left: 10px;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"border: 1px solid rgb(224, 224, 224);\n"
"background:  rgb(224, 224, 224);\n"
"height: 2px;\n"
"border-radius: 1px;\n"
"padding-right: -10px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"background:  rgba(77, 182, 172, 255);\n"
"border: 1px solid  rgba(224, 224, 224, 255);\n"
"height: 2px;\n"
"border-radius: 1px;\n"
"padding-right: 10px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"background:  rgb(224, 224, 224);\n"
"border: 1px solid rgb(224, 224, 224);\n"
"height: 2px;\n"
"border-radius: 1px;\n"
"padding-right: 10px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.397, fx:0.5, fy:0.5, stop:0.625 rgba(77, 182, 172, 255), stop:0.664773 rgba(189, 189, 189, 0));\n"
"width: 20px;\n"
"margin-top: -10px;\n"
"margin-bottom: -10px;\n"
"border-radius: 10px;\n"
"margin-left: -10px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"backg"
                        "round: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.397, fx:0.5, fy:0.5, stop:0.625 rgba(77, 182, 172, 255), stop:0.664773 rgba(189, 189, 189, 100));\n"
"}\n"
"\n"
"QSlider::handle:horizontal:pressed {\n"
"background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.597, fx:0.5, fy:0.5, stop:0.625 rgba(77, 182, 172, 255), stop:0.664773 rgba(189, 189, 189, 0));\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"background: rgba(0, 0, 0, 66);\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"background: rgba(0, 0, 0, 66);\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.397, fx:0.5, fy:0.5, stop:0.625 rgba(0, 0, 0, 66), stop:0.664773 rgba(189, 189, 189, 0));\n"
"width: 20px;\n"
"margin-top: -10px;\n"
"margin-bottom: -10px;\n"
"border-radius: 10px;\n"
"margin-left: -10px;\n"
"}\n"
"\n"
"QSlider::groove:horizontal:disabled{\n"
"background: rgba(0, 0, 0, 0);\n"
"}"));
        horizontalSliderSpeed->setInputMethodHints(Qt::ImhNone);
        horizontalSliderSpeed->setMinimum(10);
        horizontalSliderSpeed->setMaximum(300);
        horizontalSliderSpeed->setValue(10);
        horizontalSliderSpeed->setSliderPosition(10);
        horizontalSliderSpeed->setOrientation(Qt::Horizontal);
        horizontalSliderSpeed->setInvertedAppearance(false);
        horizontalSliderSpeed->setInvertedControls(false);
        horizontalSliderSpeed->setTickPosition(QSlider::NoTicks);
        horizontalSliderSpeed->setTickInterval(0);

        horizontalLayout_3->addWidget(horizontalSliderSpeed);

        labelValueSpeed = new QLabel(centralWidget);
        labelValueSpeed->setObjectName(QStringLiteral("labelValueSpeed"));
        labelValueSpeed->setMaximumSize(QSize(70, 30));

        horizontalLayout_3->addWidget(labelValueSpeed);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayoutControl->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(250, 30));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSliderWeight = new QSlider(centralWidget);
        horizontalSliderWeight->setObjectName(QStringLiteral("horizontalSliderWeight"));
        horizontalSliderWeight->setMaximumSize(QSize(200, 16777215));
        horizontalSliderWeight->setStyleSheet(QLatin1String("QSlider{\n"
"padding-right: 10px;\n"
"padding-left: 10px;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"border: 1px solid rgb(224, 224, 224);\n"
"background:  rgb(224, 224, 224);\n"
"height: 2px;\n"
"border-radius: 1px;\n"
"padding-right: -10px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"background:  rgba(255, 167, 38, 255);\n"
"border: 1px solid  rgba(224, 224, 224, 255);\n"
"height: 2px;\n"
"border-radius: 1px;\n"
"padding-right: 10px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"background:  rgb(224, 224, 224);\n"
"border: 1px solid rgb(224, 224, 224);\n"
"height: 2px;\n"
"border-radius: 1px;\n"
"padding-right: 10px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.397, fx:0.5, fy:0.5, stop:0.625 rgba(255, 167, 38, 255), stop:0.664773 rgba(189, 189, 189, 0));\n"
"width: 20px;\n"
"margin-top: -10px;\n"
"margin-bottom: -10px;\n"
"border-radius: 10px;\n"
"margin-left: -10px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"backg"
                        "round: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.397, fx:0.5, fy:0.5, stop:0.625 rgba(255, 167, 38, 255), stop:0.664773 rgba(189, 189, 189, 100));\n"
"}\n"
"\n"
"QSlider::handle:horizontal:pressed {\n"
"background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.597, fx:0.5, fy:0.5, stop:0.625 rgba(255, 202, 40, 255), stop:0.664773 rgba(189, 189, 189, 0));\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"background: rgba(0, 0, 0, 66);\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"background: rgba(0, 0, 0, 66);\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.397, fx:0.5, fy:0.5, stop:0.625 rgba(0, 0, 0, 66), stop:0.664773 rgba(189, 189, 189, 0));\n"
"width: 20px;\n"
"margin-top: -10px;\n"
"margin-bottom: -10px;\n"
"border-radius: 10px;\n"
"margin-left: -10px;\n"
"}\n"
"QSlider::groove:horizontal:disabled{\n"
"background: rgba(0, 0, 0, 0);\n"
"}"));
        horizontalSliderWeight->setMinimum(1);
        horizontalSliderWeight->setMaximum(27);
        horizontalSliderWeight->setSingleStep(1);
        horizontalSliderWeight->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderWeight);

        labelValueWeight = new QLabel(centralWidget);
        labelValueWeight->setObjectName(QStringLiteral("labelValueWeight"));
        labelValueWeight->setMaximumSize(QSize(70, 30));

        horizontalLayout_2->addWidget(labelValueWeight);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayoutControl->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(250, 30));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSliderAngle = new QSlider(centralWidget);
        horizontalSliderAngle->setObjectName(QStringLiteral("horizontalSliderAngle"));
        horizontalSliderAngle->setMaximumSize(QSize(200, 16777215));
        horizontalSliderAngle->setStyleSheet(QLatin1String("QSlider{\n"
"padding-right: 10px;\n"
"padding-left: 10px;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"border: 1px solid rgb(224, 224, 224);\n"
"background:  rgb(224, 224, 224);\n"
"height: 2px;\n"
"border-radius: 1px;\n"
"padding-right: -10px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"background:  rgba(239, 83, 80, 255);\n"
"border: 1px solid  rgba(224, 224, 224, 255);\n"
"height: 2px;\n"
"border-radius: 1px;\n"
"padding-right: 10px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"background:  rgb(224, 224, 224);\n"
"border: 1px solid rgb(224, 224, 224);\n"
"height: 2px;\n"
"border-radius: 1px;\n"
"padding-right: 10px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.397, fx:0.5, fy:0.5, stop:0.625 rgba(239, 83, 80, 255), stop:0.664773 rgba(189, 189, 189, 0));\n"
"width: 20px;\n"
"margin-top: -10px;\n"
"margin-bottom: -10px;\n"
"border-radius: 10px;\n"
"margin-left: -10px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"backgro"
                        "und: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.397, fx:0.5, fy:0.5, stop:0.625 rgba(239, 83, 80, 255), stop:0.664773 rgba(189, 189, 189, 100));\n"
"}\n"
"\n"
"QSlider::handle:horizontal:pressed {\n"
"background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.597, fx:0.5, fy:0.5, stop:0.625 rgba(239, 83, 80, 255), stop:0.664773 rgba(189, 189, 189, 0));\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"background: rgba(0, 0, 0, 66);\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"background: rgba(0, 0, 0, 66);\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.397, fx:0.5, fy:0.5, stop:0.625 rgba(0, 0, 0, 66), stop:0.664773 rgba(189, 189, 189, 0));\n"
"width: 20px;\n"
"margin-top: -10px;\n"
"margin-bottom: -10px;\n"
"border-radius: 10px;\n"
"margin-left: -10px;\n"
"}\n"
"QSlider::groove:horizontal:disabled{\n"
"background: rgba(0, 0, 0, 0);\n"
"}"));
        horizontalSliderAngle->setMinimum(10);
        horizontalSliderAngle->setMaximum(80);
        horizontalSliderAngle->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSliderAngle);

        labelValueAngle = new QLabel(centralWidget);
        labelValueAngle->setObjectName(QStringLiteral("labelValueAngle"));
        labelValueAngle->setMaximumSize(QSize(70, 30));

        horizontalLayout->addWidget(labelValueAngle);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayoutControl->addLayout(verticalLayout_3);

        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setMaximumSize(QSize(200, 16777215));
        startButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color:rgb(224, 224, 224);\n"
"	border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"	border-color:rgba(0, 0, 0, 20);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:rgb(200, 200, 200);\n"
"	border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"	border-color:rgba(0, 0, 0, 20);\n"
"}"));

        verticalLayoutControl->addWidget(startButton);


        horizontalLayoutWorkPart->addLayout(verticalLayoutControl);

        horizontalLayoutCombinateGraph = new QHBoxLayout();
        horizontalLayoutCombinateGraph->setSpacing(6);
        horizontalLayoutCombinateGraph->setObjectName(QStringLiteral("horizontalLayoutCombinateGraph"));
        verticalLayoutGraphicsForX = new QVBoxLayout();
        verticalLayoutGraphicsForX->setSpacing(6);
        verticalLayoutGraphicsForX->setObjectName(QStringLiteral("verticalLayoutGraphicsForX"));
        verticalLayoutGraphSpeedX = new QVBoxLayout();
        verticalLayoutGraphSpeedX->setSpacing(6);
        verticalLayoutGraphSpeedX->setObjectName(QStringLiteral("verticalLayoutGraphSpeedX"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(16777215, 30));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayoutGraphSpeedX->addWidget(label_4);

        horizontalLayoutSpeedX = new QHBoxLayout();
        horizontalLayoutSpeedX->setSpacing(6);
        horizontalLayoutSpeedX->setObjectName(QStringLiteral("horizontalLayoutSpeedX"));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(16777215, 30));

        horizontalLayoutSpeedX->addWidget(label_12);

        labelSpeedX = new QLabel(centralWidget);
        labelSpeedX->setObjectName(QStringLiteral("labelSpeedX"));
        labelSpeedX->setMaximumSize(QSize(16777215, 30));

        horizontalLayoutSpeedX->addWidget(labelSpeedX);


        verticalLayoutGraphSpeedX->addLayout(horizontalLayoutSpeedX);

        widgetSpeedX = new GraphWidget(centralWidget);
        widgetSpeedX->setObjectName(QStringLiteral("widgetSpeedX"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetSpeedX->sizePolicy().hasHeightForWidth());
        widgetSpeedX->setSizePolicy(sizePolicy1);
        widgetSpeedX->setMinimumSize(QSize(300, 120));
        label_4->raise();

        verticalLayoutGraphSpeedX->addWidget(widgetSpeedX);


        verticalLayoutGraphicsForX->addLayout(verticalLayoutGraphSpeedX);

        verticalLayoutGraphCoordX = new QVBoxLayout();
        verticalLayoutGraphCoordX->setSpacing(6);
        verticalLayoutGraphCoordX->setObjectName(QStringLiteral("verticalLayoutGraphCoordX"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(16777215, 30));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayoutGraphCoordX->addWidget(label_5);

        horizontalLayoutCoordX = new QHBoxLayout();
        horizontalLayoutCoordX->setSpacing(6);
        horizontalLayoutCoordX->setObjectName(QStringLiteral("horizontalLayoutCoordX"));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMaximumSize(QSize(16777215, 30));

        horizontalLayoutCoordX->addWidget(label_15);

        labelCoordX = new QLabel(centralWidget);
        labelCoordX->setObjectName(QStringLiteral("labelCoordX"));
        labelCoordX->setMaximumSize(QSize(16777215, 30));

        horizontalLayoutCoordX->addWidget(labelCoordX);


        verticalLayoutGraphCoordX->addLayout(horizontalLayoutCoordX);

        widgetCoordX = new GraphWidget(centralWidget);
        widgetCoordX->setObjectName(QStringLiteral("widgetCoordX"));
        sizePolicy1.setHeightForWidth(widgetCoordX->sizePolicy().hasHeightForWidth());
        widgetCoordX->setSizePolicy(sizePolicy1);
        widgetCoordX->setMinimumSize(QSize(300, 120));

        verticalLayoutGraphCoordX->addWidget(widgetCoordX);


        verticalLayoutGraphicsForX->addLayout(verticalLayoutGraphCoordX);

        verticalLayoutGraphEnergyX = new QVBoxLayout();
        verticalLayoutGraphEnergyX->setSpacing(6);
        verticalLayoutGraphEnergyX->setObjectName(QStringLiteral("verticalLayoutGraphEnergyX"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(16777215, 30));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayoutGraphEnergyX->addWidget(label_6);

        horizontalLayoutEnergyX = new QHBoxLayout();
        horizontalLayoutEnergyX->setSpacing(6);
        horizontalLayoutEnergyX->setObjectName(QStringLiteral("horizontalLayoutEnergyX"));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMaximumSize(QSize(16777215, 30));

        horizontalLayoutEnergyX->addWidget(label_16);

        labelEnergyX = new QLabel(centralWidget);
        labelEnergyX->setObjectName(QStringLiteral("labelEnergyX"));
        labelEnergyX->setMaximumSize(QSize(16777215, 30));

        horizontalLayoutEnergyX->addWidget(labelEnergyX);


        verticalLayoutGraphEnergyX->addLayout(horizontalLayoutEnergyX);

        widgetEnergyX = new GraphWidget(centralWidget);
        widgetEnergyX->setObjectName(QStringLiteral("widgetEnergyX"));
        sizePolicy1.setHeightForWidth(widgetEnergyX->sizePolicy().hasHeightForWidth());
        widgetEnergyX->setSizePolicy(sizePolicy1);
        widgetEnergyX->setMinimumSize(QSize(300, 120));
        label_16->raise();

        verticalLayoutGraphEnergyX->addWidget(widgetEnergyX);


        verticalLayoutGraphicsForX->addLayout(verticalLayoutGraphEnergyX);


        horizontalLayoutCombinateGraph->addLayout(verticalLayoutGraphicsForX);

        verticalLayoutGraphicsForY = new QVBoxLayout();
        verticalLayoutGraphicsForY->setSpacing(6);
        verticalLayoutGraphicsForY->setObjectName(QStringLiteral("verticalLayoutGraphicsForY"));
        verticalLayoutGraphSpeedY = new QVBoxLayout();
        verticalLayoutGraphSpeedY->setSpacing(6);
        verticalLayoutGraphSpeedY->setObjectName(QStringLiteral("verticalLayoutGraphSpeedY"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(16777215, 30));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayoutGraphSpeedY->addWidget(label_7);

        horizontalLayoutSpeedY = new QHBoxLayout();
        horizontalLayoutSpeedY->setSpacing(6);
        horizontalLayoutSpeedY->setObjectName(QStringLiteral("horizontalLayoutSpeedY"));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMaximumSize(QSize(16777215, 30));

        horizontalLayoutSpeedY->addWidget(label_13);

        labelSpeedY = new QLabel(centralWidget);
        labelSpeedY->setObjectName(QStringLiteral("labelSpeedY"));
        labelSpeedY->setMaximumSize(QSize(16777215, 30));

        horizontalLayoutSpeedY->addWidget(labelSpeedY);


        verticalLayoutGraphSpeedY->addLayout(horizontalLayoutSpeedY);

        widgetSpeedY = new GraphWidget(centralWidget);
        widgetSpeedY->setObjectName(QStringLiteral("widgetSpeedY"));
        sizePolicy1.setHeightForWidth(widgetSpeedY->sizePolicy().hasHeightForWidth());
        widgetSpeedY->setSizePolicy(sizePolicy1);
        widgetSpeedY->setMinimumSize(QSize(300, 120));

        verticalLayoutGraphSpeedY->addWidget(widgetSpeedY);


        verticalLayoutGraphicsForY->addLayout(verticalLayoutGraphSpeedY);

        verticalLayoutGraphCoordY = new QVBoxLayout();
        verticalLayoutGraphCoordY->setSpacing(6);
        verticalLayoutGraphCoordY->setObjectName(QStringLiteral("verticalLayoutGraphCoordY"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(16777215, 30));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayoutGraphCoordY->addWidget(label_8);

        horizontalLayoutCoordY = new QHBoxLayout();
        horizontalLayoutCoordY->setSpacing(6);
        horizontalLayoutCoordY->setObjectName(QStringLiteral("horizontalLayoutCoordY"));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMaximumSize(QSize(16777215, 30));

        horizontalLayoutCoordY->addWidget(label_14);

        labelCoordY = new QLabel(centralWidget);
        labelCoordY->setObjectName(QStringLiteral("labelCoordY"));
        labelCoordY->setMaximumSize(QSize(16777215, 30));

        horizontalLayoutCoordY->addWidget(labelCoordY);


        verticalLayoutGraphCoordY->addLayout(horizontalLayoutCoordY);

        widgetCoordY = new GraphWidget(centralWidget);
        widgetCoordY->setObjectName(QStringLiteral("widgetCoordY"));
        sizePolicy1.setHeightForWidth(widgetCoordY->sizePolicy().hasHeightForWidth());
        widgetCoordY->setSizePolicy(sizePolicy1);
        widgetCoordY->setMinimumSize(QSize(300, 120));

        verticalLayoutGraphCoordY->addWidget(widgetCoordY);


        verticalLayoutGraphicsForY->addLayout(verticalLayoutGraphCoordY);

        verticalLayoutGraphEnergyY = new QVBoxLayout();
        verticalLayoutGraphEnergyY->setSpacing(6);
        verticalLayoutGraphEnergyY->setObjectName(QStringLiteral("verticalLayoutGraphEnergyY"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMaximumSize(QSize(16777215, 30));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayoutGraphEnergyY->addWidget(label_9);

        horizontalLayoutEnergyY = new QHBoxLayout();
        horizontalLayoutEnergyY->setSpacing(6);
        horizontalLayoutEnergyY->setObjectName(QStringLiteral("horizontalLayoutEnergyY"));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMaximumSize(QSize(16777215, 30));

        horizontalLayoutEnergyY->addWidget(label_17);

        labelEnergyY = new QLabel(centralWidget);
        labelEnergyY->setObjectName(QStringLiteral("labelEnergyY"));
        labelEnergyY->setMaximumSize(QSize(16777215, 30));

        horizontalLayoutEnergyY->addWidget(labelEnergyY);


        verticalLayoutGraphEnergyY->addLayout(horizontalLayoutEnergyY);

        widgetEnergyY = new GraphWidget(centralWidget);
        widgetEnergyY->setObjectName(QStringLiteral("widgetEnergyY"));
        sizePolicy1.setHeightForWidth(widgetEnergyY->sizePolicy().hasHeightForWidth());
        widgetEnergyY->setSizePolicy(sizePolicy1);
        widgetEnergyY->setMinimumSize(QSize(300, 120));

        verticalLayoutGraphEnergyY->addWidget(widgetEnergyY);


        verticalLayoutGraphicsForY->addLayout(verticalLayoutGraphEnergyY);


        horizontalLayoutCombinateGraph->addLayout(verticalLayoutGraphicsForY);


        horizontalLayoutWorkPart->addLayout(horizontalLayoutCombinateGraph);


        verticalLayoutApp->addLayout(horizontalLayoutWorkPart);


        gridLayout->addLayout(verticalLayoutApp, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        labelTitleProgramm->raise();
        label_11->raise();
        labelCurrentTime->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        label_16->raise();
        label_17->raise();
        labelSpeedX->raise();
        labelSpeedY->raise();
        labelCoordX->raise();
        labelCoordY->raise();
        labelEnergyX->raise();
        labelEnergyY->raise();
        label_14->raise();
        labelCurrentTime->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Physics", Q_NULLPTR));
        labelTitleProgramm->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\267\321\203\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\261\320\260\320\273\320\273\320\270\321\201\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\263\320\276 \320\264\320\262\320\270\320\266\320\265\320\275\320\270\321\217", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\265\320\265 \320\262\321\200\320\265\320\274\321\217: ", Q_NULLPTR));
        labelCurrentTime->setText(QString());
        radioAsphalt->setText(QApplication::translate("MainWindow", "\320\220\321\201\321\204\320\260\320\273\321\214\321\202", Q_NULLPTR));
        radioGrass->setText(QApplication::translate("MainWindow", "\320\227\320\265\320\274\320\273\321\217", Q_NULLPTR));
        radioSand->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\201\320\276\320\272", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214, \320\274/\321\201", Q_NULLPTR));
        labelValueSpeed->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\201\321\201\320\260 \321\210\320\260\321\200\320\270\320\272\320\260, \320\272\320\263", Q_NULLPTR));
        labelValueWeight->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 \320\275\320\260\320\272\320\273\320\276\320\275\320\260, \320\263\321\200\320\260\320\264\321\203\321\201\321\213", Q_NULLPTR));
        labelValueAngle->setText(QString());
        startButton->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\262\320\270\320\267\321\203\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\216", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\320\270 \320\277\320\276 \320\276\321\201\320\270 \320\245, \320\274/\321\201", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\277\320\276 \320\276\321\201\320\270 OX:", Q_NULLPTR));
        labelSpeedX->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 X, \320\274", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 \320\277\320\276 \320\276\321\201\320\270 OX:", Q_NULLPTR));
        labelCoordX->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\272\320\270\320\275\320\265\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\271 \321\215\320\275\320\265\321\200\320\263\320\270\320\270, \320\224\320\266", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "\320\232\320\270\320\275\320\265\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \321\215\320\275\320\265\321\200\320\263\320\270\321\217:", Q_NULLPTR));
        labelEnergyX->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\320\270 \320\277\320\276 \320\276\321\201\320\270 Y, \320\274/\321\201", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\277\320\276 \320\276\321\201\320\270 OY:", Q_NULLPTR));
        labelSpeedY->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 Y, \320\274", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 \320\277\320\276 \320\276\321\201\320\270 OY:", Q_NULLPTR));
        labelCoordY->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\277\320\276\321\202\320\265\320\275\321\206\320\270\320\260\320\273\321\214\320\275\320\276\320\271 \321\215\320\275\320\265\321\200\320\263\320\270\320\270, \320\224\320\266", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\202\320\265\320\275\321\206\320\270\320\260\320\273\321\214\320\275\320\260\321\217 \321\215\320\275\320\265\321\200\320\263\320\270\321\217:", Q_NULLPTR));
        labelEnergyY->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
