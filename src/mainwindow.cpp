/**
 * @file mainwindow.cpp
 * Create window and UI.
 * Widget is a field with a physical quantity graph.
 * Used "Roboto" font.
 * Slider style is Google Material.
 *
 * @author Anton Klochkov (tklochkov@gmail.com)
 * @date 09.05.2017
 * @version 1.0
 */


#include "mainwindow.h"
#include "ui_mainwindow.h"


/**
 * Create window. Installing fonts, widgets, controllers, and window colors.
 * Initialization of the physical engine.
 */
MainWindow::MainWindow (QWidget* parent) : QMainWindow(parent), ui_(new Ui::MainWindow), engine()
{
    ui_->setupUi(this);

    setWindowColor();
    setCustomFont();
    initializationOfControl();

    connectToPhysicalEngine();

    setFormWidgets();
}


void MainWindow::setWindowColor ()
{
    QPalette p = this->palette();
    p.setColor(QPalette::Window, QColor(245, 245, 245, 254));
    this->setPalette(p);
}


/**
 * Here the font "Roboto" is used.
 * Button and title have a bold font.
 */
void MainWindow::setCustomFont ()
{
    //You must specify a path to the files with fonts.
    QFontDatabase::addApplicationFont(
            "C:\\Users\\toxad\\ClionProjects\\Modeling_ballistic_movement\\QTCreator\\Graph\\Fonts\\RobotoRegular.ttf");
    QFontDatabase::addApplicationFont(
            "C:\\Users\\toxad\\ClionProjects\\Modeling_ballistic_movement\\QTCreator\\Graph\\Fonts\\RobotoBold.ttf");

    this->setFont(QFont("Roboto", 13));

    ui_->startButton->setFont(QFont("Roboto", 13, QFont::Bold));
    ui_->radioSand->setFont(QFont("Roboto", 13));
    ui_->radioGrass->setFont(QFont("Roboto", 13));
    ui_->radioAsphalt->setFont(QFont("Roboto", 13));

    ui_->labelTitleProgramm->setFont(QFont("Roboto", 18, QFont::Bold));
}


/**
 * Establishing interaction between controllers and the class.
 */
void MainWindow::initializationOfControl ()
{
    ui_->startButton->setEnabled(false);

    //Combine the radio buttons in a group.
    signMap_ = new QSignalMapper(this);

    connect(ui_->radioAsphalt, SIGNAL(clicked()), signMap_, SLOT(map()));
    connect(ui_->radioGrass, SIGNAL(clicked()), signMap_, SLOT(map()));
    connect(ui_->radioSand, SIGNAL(clicked()), signMap_, SLOT(map()));

    signMap_->setMapping(ui_->radioAsphalt, SURFACE_ASPHALT);
    signMap_->setMapping(ui_->radioGrass, SURFACE_GRASS);
    signMap_->setMapping(ui_->radioSand, SURFACE_SAND);

    //Changing the radio button changes the type of land.
    connect(signMap_, SIGNAL(mapped(int)), &engine, SLOT(setTypeLand(int)));

    //Connect the sliders with the values of the class to change them and the text.
    connect(ui_->horizontalSliderSpeed, SIGNAL(valueChanged(int)), this, SLOT(startButtonEnable()));
    connect(ui_->horizontalSliderWeight, SIGNAL(valueChanged(int)), this, SLOT(startButtonEnable()));
    connect(ui_->horizontalSliderAngle, SIGNAL(valueChanged(int)), this, SLOT(startButtonEnable()));
}


/**
 * Each widget specifies certain properties.
 *
 * \TypeWidget     the type of the displayed value. It can be: Speed, Coordinates or Energy.
 * \TypeAxis       the type of axis on which the value is projected. It can be: X or Y.
 * \PhysicalEngine physical engine. Described in PhysicalEngine.h
 *
 * You also need to connect the start button to the widget.
 */
void MainWindow::setFormWidgets ()
{

    //Speed along the TYPEOFAXIS_X axis.
    ui_->widgetSpeedX->setTypeWidget(TYPEOFWIDGET_SPEED);
    ui_->widgetSpeedX->setTypeAxis(TYPEOFAXIS_X);
    ui_->widgetSpeedX->setPhysicalEngine(&engine);
    connect(ui_->startButton, SIGNAL(clicked()), ui_->widgetSpeedX, SLOT(startTimer()));
    connect(ui_->widgetSpeedX, SIGNAL(endShow()), this, SLOT(startButtonEnable()));

    //Speed along the TYPEOFAXIS_Y axis.
    ui_->widgetSpeedY->setTypeWidget(TYPEOFWIDGET_SPEED);
    ui_->widgetSpeedY->setTypeAxis(TYPEOFAXIS_Y);
    ui_->widgetSpeedY->setPhysicalEngine(&engine);
    connect(ui_->startButton, SIGNAL(clicked()), ui_->widgetSpeedY, SLOT(startTimer()));
    connect(ui_->widgetSpeedY, SIGNAL(endShow()), this, SLOT(startButtonEnable()));

    //Coordinate along the TYPEOFAXIS_X axis.
    ui_->widgetCoordX->setTypeWidget(TYPEOFWIDGET_COORDINATES);
    ui_->widgetCoordX->setTypeAxis(TYPEOFAXIS_X);
    ui_->widgetCoordX->setPhysicalEngine(&engine);
    connect(ui_->startButton, SIGNAL(clicked()), ui_->widgetCoordX, SLOT(startTimer()));
    connect(ui_->widgetCoordX, SIGNAL(endShow()), this, SLOT(startButtonEnable()));

    //Coordinate along the TYPEOFAXIS_Y axis.
    ui_->widgetCoordY->setTypeWidget(TYPEOFWIDGET_COORDINATES);
    ui_->widgetCoordY->setTypeAxis(TYPEOFAXIS_Y);
    ui_->widgetCoordY->setPhysicalEngine(&engine);
    connect(ui_->startButton, SIGNAL(clicked()), ui_->widgetCoordY, SLOT(startTimer()));
    connect(ui_->widgetCoordY, SIGNAL(endShow()), this, SLOT(startButtonEnable()));

    //Energy along the TYPEOFAXIS_X axis.
    ui_->widgetEnergyX->setTypeWidget(TYPEOFWIDGET_ENERGY);
    ui_->widgetEnergyX->setTypeAxis(TYPEOFAXIS_X);
    ui_->widgetEnergyX->setPhysicalEngine(&engine);
    connect(ui_->startButton, SIGNAL(clicked()), ui_->widgetEnergyX, SLOT(startTimer()));
    connect(ui_->widgetEnergyX, SIGNAL(endShow()), this, SLOT(startButtonEnable()));

    //Energy along the TYPEOFAXIS_Y axis.
    ui_->widgetEnergyY->setTypeWidget(TYPEOFWIDGET_ENERGY);
    ui_->widgetEnergyY->setTypeAxis(TYPEOFAXIS_Y);
    ui_->widgetEnergyY->setPhysicalEngine(&engine);
    connect(ui_->startButton, SIGNAL(clicked()), ui_->widgetEnergyY, SLOT(startTimer()));
    connect(ui_->widgetEnergyY, SIGNAL(endShow()), this, SLOT(startButtonEnable()));
}


/**
 * Connect with start button and with a function for update information.
 */
void MainWindow::connectToPhysicalEngine ()
{
    connect(this, SIGNAL(signalAlpha (float)), &engine, SLOT(setAlpha(float)));
    connect(this, SIGNAL(signalSpeed (float)), &engine, SLOT(setStartingSpeed(float)));
    connect(this, SIGNAL(signalWeight(float)), &engine, SLOT(setWeight(float)));


    connect(ui_->startButton, SIGNAL(clicked()), &engine, SLOT(clearGenerator()));

    connect(&engine, SIGNAL(updateInfo(float, float, float, float, float, float, float)),
            this, SLOT(updateInformation(float, float, float, float, float, float, float)));

}


/**
 * Activation of frozen elements and displaying of their actual information.
 */
void MainWindow::startButtonEnable ()
{
    if ( !ui_->startButton->isEnabled()) {
        enableElements(true);
    }


    ui_->labelValueAngle->setText(QString::number(ui_->horizontalSliderAngle->value()));
    ui_->labelValueWeight->setText(QString::number(ui_->horizontalSliderWeight->value()));
    ui_->labelValueSpeed->setText(QString::number(ui_->horizontalSliderSpeed->value()));

    emit signalAlpha(ui_->horizontalSliderAngle->value());
    emit signalWeight(ui_->horizontalSliderWeight->value());
    emit signalSpeed(ui_->horizontalSliderSpeed->value());
}


/**
 * Override function for disable elements when go is drawing.
 */
void MainWindow::on_startButton_clicked()
{
    enableElements(false);
}


/**
 * Enable and disable elements on form.
 *
 * @param status - bool
 */
void MainWindow::enableElements (bool status)
{
    ui_->startButton->setEnabled(status);
    ui_->radioGrass->setEnabled(status);
    ui_->radioAsphalt->setEnabled(status);
    ui_->radioSand->setEnabled(status);
    ui_->horizontalSliderSpeed->setEnabled(status);
    ui_->horizontalSliderAngle->setEnabled(status);
    ui_->horizontalSliderWeight->setEnabled(status);
}


/**
 * Displays current information.
 *
 * @param curTime  the current time in seconds.
 * @param speedX   the current speed value along the X axis.
 * @param speedY   the current speed value along the Y axis.
 * @param coordX   the current coordinate value along the X axis.
 * @param coordY   the current coordinate value along the Y axis.
 * @param energyX  the current energy value along the X axis.
 * @param energyY  the current energy value along the Y axis.
 */
void
MainWindow::updateInformation (float curTime, float speedX, float speedY, float coordX, float coordY, float energyX,
                               float energyY)
{
    ui_->labelCurrentTime->setText(QString::number(curTime));

    ui_->labelSpeedX->setText(QString::number(speedX));
    ui_->labelSpeedY->setText(QString::number(speedY));

    ui_->labelCoordX->setText(QString::number(coordX));
    ui_->labelCoordY->setText(QString::number(coordY));

    ui_->labelEnergyX->setText(QString::number(energyX));
    ui_->labelEnergyY->setText(QString::number(energyY));
}


MainWindow::~MainWindow ()
{
    delete ui_;
}