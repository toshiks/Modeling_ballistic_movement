/**
 * @file GraphWidget.cpp
 * Creating functional of graphical widget.
 *
 * @author Anton Klochkov (tklochkov@gmail.com)
 * @date 10.05.2017
 * @version 1.0
 */
#include <iostream>
#include "GraphWidget.h"
#include <QWheelEvent>


/**
 * Default constructor. Create timer, establishing tracking the mouse cursor, initial filed for drawing.
 *
 * @param parent - <code>QWidget</code> - Where the widget will be located.
 */
GraphWidget::GraphWidget (QWidget* parent) :
        QWidget(parent),
        typeOfWidget(TYPEOFWIDGET_SPEED),
        typeOfAxis(TYPEOFAXIS_X)
{
    timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(updateData()));
    connect(timer, SIGNAL(timeout()), this, SLOT(repaint()));

    deskPainter = new GraphPainter(this);

    this->setMouseTracking(true);
}


GraphWidget::~GraphWidget ()
{
    delete timer;
    delete deskPainter;
}


/**
 * Start timer for rendering picture on this widget.
 */
void GraphWidget::startTimer ()
{
    timer->start(10);
}


/**
 * Override basic method of QObject for repaint picture.
 *
 * @param e
 */
void GraphWidget::paintEvent (QPaintEvent* e)
{
    //If widget is drawing now, so it don't react to mouse movement, so mouseCoordinateX equals -1.
    if ( timer->isActive()) {
        deskPainter->setData(engine->getData(typeOfWidget, typeOfAxis));
        deskPainter->setTimes(engine->getTimes());

        leftBorderOfData = 0;
        rightBorderOfData = engine->getData(typeOfWidget, typeOfAxis)->getSize();

        mouseCoordinateX = -1;
    }

    deskPainter->paint(static_cast<int>(log2(typeOfAxis * typeOfWidget)),
                       leftBorderOfData, rightBorderOfData, mouseCoordinateX);
}


/**
 * Override basic method of QObject for resize widget.
 *
 * @param e
 */
void GraphWidget::resizeEvent (QResizeEvent* e)
{
    if ( this->deskPainter != nullptr ) {
        this->deskPainter->setSize(QRectF(0, 0, width(), height()));
    }
}


/**
 *  Get information from physical engine and update it here.
 */
void GraphWidget::updateData ()
{
    if ( timer->isActive()) {
        engine->generate(typeOfWidget, typeOfAxis);

        //Stop widget
        if ( engine->getCurrentTime() < 0.05 ) {
            leftBorderOfData = 0;
            rightBorderOfData = sizeData = engine->getData(typeOfWidget, typeOfAxis)->getSize();

            timer->stop();

            emit engine->updateInfo(0, 0, 0, 0, 0, 0, 0);
            emit endShow();

            engine->clearTempData();
        }
    }

}


/**
 * Tracking the movement of the mouse wheel. Specially selected parameters narrow the range of output data.
 *
 * @param event - <code>QWheelEvent</code>
 */
void GraphWidget::wheelEvent (QWheelEvent* event)
{

    if ( timer->isActive() || !engine->getData(typeOfWidget, typeOfAxis)->getSize())
        return;

    int old_rightBorderOfData = rightBorderOfData;
    int old_leftBorderOfData  = leftBorderOfData;

    const int coordX = event->x();

    int stepLeft  = coordX / ( width() - coordX) * 29 + 10;
    int stepRight = ( width() - coordX) / coordX * 29 + 10;

    stepLeft  = std::min(stepLeft,  30);
    stepRight = std::min(stepRight, 30);


    if ( event->delta() > 0 && leftBorderOfData < rightBorderOfData ) {
        leftBorderOfData  = std::min(( rightBorderOfData + leftBorderOfData ) / 2, leftBorderOfData  + stepLeft);
        rightBorderOfData = std::max(( rightBorderOfData - leftBorderOfData ) / 2, rightBorderOfData - stepRight);

        if ( leftBorderOfData > rightBorderOfData ) {
            leftBorderOfData  = ( leftBorderOfData + rightBorderOfData ) / 2;
            rightBorderOfData = leftBorderOfData + 1;
        }
    }

    if ( event->delta() < 0 && leftBorderOfData >= 0 && rightBorderOfData <= sizeData ) {
        leftBorderOfData  = (std::max(0,         leftBorderOfData  - stepLeft));
        rightBorderOfData = (std::min(sizeData,  rightBorderOfData + stepRight));
    }

    if (abs(rightBorderOfData - leftBorderOfData) <= 30){
        rightBorderOfData = old_rightBorderOfData;
        leftBorderOfData  = old_leftBorderOfData;
    }

    emit repaint();
}


/**
 * Tracking the movement of the mouse.
 *
 * @param event - <code>QMouseEvent</code>
 */
void GraphWidget::mouseMoveEvent (QMouseEvent* event)
{
    if ( timer->isActive() || !engine->getData(typeOfWidget, typeOfAxis)->getSize())
        return;

    mouseCoordinateX = event->x();

    emit repaint();
}


/**
 * Leave all events.
 *
 * @param event - <code>QEvent</code>
 */
void GraphWidget::leaveEvent (QEvent* event)
{
    mouseCoordinateX = -1;

    emit repaint();
}


/**
 * Set type of widget.
 *
 * @param typeOfWidget - <code>TYPEOFWIDGET</code>: Speed, Coordinates or Energy
 */
void GraphWidget::setTypeWidget (TYPEOFWIDGET typeOfWidget)
{
    this->typeOfWidget = typeOfWidget;
}


/**
 * Set type of axis.
 *
 * @param typeOfAxis - <code>TYPEOFAXIS</code>: X or Y
 */
void GraphWidget::setTypeAxis (TYPEOFAXIS typeOfAxis)
{
    this->typeOfAxis = typeOfAxis;
}


/**
 * Set physical engine.
 *
 * @param engine - <code>PhysicalEngine</code>
 */
void GraphWidget::setPhysicalEngine (PhysicalEngine* engine)
{
    this->engine = engine;
}