/**
 * @file GraphPainter.cpp
 * Implementation of the drawing process.
 *
 * @author Anton Klochkov (tklochkov@gmail.com)
 * @date 10.05.2017
 * @version 1.0
 */

#include "GraphPainter.h"


/**
 * Default constructor. Setting default colors.
 *
 * @param parent - <code>QWidget</code> - Where the widget will be located.
 */
GraphPainter::GraphPainter (QPaintDevice* widget) : DeskPainter(widget),
                                                    colors({ QColor(255, 255, 0),
                                                             QColor(255, 127, 0),
                                                             QColor(0, 127, 255),
                                                             QColor(77, 208, 225),
                                                             QColor(127, 0, 255),
                                                             QColor(0, 255, 0),
                                                             QColor(0, 255, 127),
                                                             QColor(0, 255, 255),
                                                             QColor(0, 0, 255),
                                                             QColor(255, 0, 255),
                                                             QColor(255, 0, 127) })
{ }


/**
 * Override function for drawing on widget.
 *
 * @param indexInArrayOfData - index in array of data.
 * @param leftBorderOfData   - left border for drawing part of data.
 * @param rightBorderOfData  - right border for drawing part of data.
 * @param mouseCoordinateX   - coordinate of mouse for drawing pointer on widget.
 */
void GraphPainter::paint (int indexInArrayOfData, int leftBorderOfData, int rightBorderOfData, int mouseCoordinateX)
{
    QPainter q(widget);

    drawBackground(q);
    drawGrid(q);

    if ( data == nullptr )
        return;

    QColor bodyColor = colors[ indexInArrayOfData ];
    bodyColor.setAlpha(80);

    drawLine(q, data->getMax(), colors[ indexInArrayOfData ],
             bodyColor, leftBorderOfData, rightBorderOfData, mouseCoordinateX);
}


/**
 * Drawing line of graph and area under it on widget.
 *
 * @param painter            - interface for drawing.
 * @param currentMax         - value for scaling.
 * @param lineColor          - color of line.
 * @param bodyColor          - color of area under graph.
 * @param leftBorderOfData   - left border for drawing part of data.
 * @param rightBorderOfData  - right border for drawing part of data.
 * @param mouseCoordinateX   - coordinate of mouse for drawing pointer on widget.
 */
void GraphPainter::drawLine (QPainter &painter,
                             float currentMax, QColor &lineColor,
                             QColor &bodyColor, int leftBorderOfData,
                             int rightBorderOfData, int mouseCoordinateX) const
{
    size_t dataSize = data->getSize();
    QPolygonF polygon;

    float xGraph, yGraph;

    float cursorY = -1;
    int   ind     =  0;

    if ( rightBorderOfData != dataSize || leftBorderOfData != 0 ) {
        dataSize = static_cast<size_t>(rightBorderOfData - leftBorderOfData);
    }

    float step = static_cast<float>(size.width()) / ( dataSize - 1 );

    if ( mouseCoordinateX >= 0 ) {
        mouseCoordinateX = static_cast<int>(( mouseCoordinateX / step ) * step);
    }


    painter.setPen(lineColor);
    painter.setBrush(bodyColor);


    currentMax += currentMax / 10;
    if ( currentMax <= 0 )
        return;

    for ( float i = 0; i < dataSize; i++ ) {
        if ( i == 0 ) {
            polygon.append(QPointF(i * step, size.height()));
        }

        yGraph = static_cast<float>(size.height());

        yGraph -= (( *data )[ i + leftBorderOfData ] / currentMax * ( size.height() - 5 ));
        xGraph  = i * step;

        if ( xGraph >= mouseCoordinateX && cursorY == -1 ) {
            cursorY = yGraph;

            ind = static_cast<int>(leftBorderOfData + i);
        }

        polygon.append(QPointF(xGraph, yGraph));

        if ( i == dataSize - 1 ) {
            polygon.append(QPointF(xGraph, size.height()));
        }
    }

    painter.drawPolygon(polygon);

    if ( mouseCoordinateX >= 0 ) {
        painter.setPen(QColor(255, 0, 0, 255));

        painter.drawLine(mouseCoordinateX, 0, mouseCoordinateX, static_cast<int>(size.height()));
        painter.drawLine(0, static_cast<int>(cursorY), static_cast<int>(size.width()), static_cast<int>(cursorY));

        painter.setPen (QColor(0, 0, 0, 255));
        painter.setFont(QFont ("Roboto", 11));

        painter.drawText(static_cast<int>(size.width() - 100), 20, "Val: " + QString::number (( *data  )[ ind ]));
        painter.drawText(static_cast<int>(size.width() - 100), 40, "Time: " + QString::number(( *times )[ ind ]));

    }
}