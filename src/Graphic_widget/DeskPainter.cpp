/**
 * @file DeskPainter.cpp
 * Interface for drawing on GraphWidget.
 *
 * @author Anton Klochkov (tklochkov@gmail.com)
 * @date 10.05.2017
 * @version 1.0
 */

#include "DeskPainter.h"

/**
 * Default constructor. Use standard parameters, which can be changed.
 *
 * @param widget - <code>QPaintDevice</code> - widget, where need to draw.
 */
DeskPainter::DeskPainter (QPaintDevice* widget) : size(QRectF(0, 0, 200, 200)), widthStep(20), heightStep(20),
                                                  drawGrids(1), gridColor(QColor(180, 180, 180, 180)),
                                                  backgroundColor(QColor(255, 255, 255, 255)),
                                                  colors(std::vector < QColor >{ QColor(0, 230, 0, 255),
                                                                                 QColor(0, 230, 0, 255) }),
                                                  widget(widget), data(nullptr)
{ }


/**
 * Draw background on widget.
 *
 * @param paint - <code>QPainter</code> - interface for drawing.
 */
void DeskPainter::drawBackground (QPainter &paint) const
{
    paint.setPen(QColor(255, 255, 255, 20));
    paint.setBrush(QColor(0, 0, 0, 30));

    paint.drawRect(static_cast<int>(size.x()),
                   static_cast<int>(size.y()),
                   static_cast<int>(size.width() + 1),
                   static_cast<int>(size.height() + 1));

    paint.setPen(QColor(255, 255, 255, 0));
    paint.setBrush(backgroundColor);

    paint.drawRect(static_cast<int>(size.x()),
                   static_cast<int>(size.y()),
                   static_cast<int>(size.width() - 1),
                   static_cast<int>(size.height() - 1));
}


/**
 * Draw grid on widget.
 *
 * @param paint - <code>QPainter</code> - interface for drawing.
 */
void DeskPainter::drawGrid (QPainter &paint) const
{
    if ( !drawGrids )
        return;

    paint.setPen(gridColor);

    int countWidthSteps  = static_cast<int>(size.width()  / widthStep);
    int countHeightSteps = static_cast<int>(size.height() / heightStep);

    int minSteps = std::min(countHeightSteps, countWidthSteps);

    int i;

    for ( i = 1; i < minSteps; i++ ) {
        //horizontal lines
        paint.drawLine(widthStep * i, 0, widthStep * i, static_cast<int>(size.height()));

        //vertical lines
        paint.drawLine(0, heightStep * i, static_cast<int>(size.width()), heightStep * i);
    }

    //horizontal lines
    for ( ; i < countWidthSteps; i++ ) {
        paint.drawLine(widthStep * i, 0, widthStep * i, static_cast<int>(size.height()));
    }

    //vertical lines
    for ( ; i < countHeightSteps; i++ ) {
        paint.drawLine(0, heightStep * i, static_cast<int>(size.width()), heightStep * i);
    }
}


/**
 * Set data for graph.
 *
 * @param data - <code>const QueueWithMax < float >*</code> - a const pointer to the data of widget.
 */
void DeskPainter::setData (const QueueWithMax < float >* data)
{
    this->data = data;
}


/**
 * Set points on the timeline.
 *
 * @param times - <code>const QueueWithMax < float >*</code> - a const pointer to the data of the timeline.
 */
void DeskPainter::setTimes (const QueueWithMax < float >* times)
{
    this->times = times;
}

/**
 * Set background of widget.
 *
 * @param color - <code>const QColor</code> - color.
 */
void DeskPainter::setBackgroundColor (const QColor &color)
{
    this->backgroundColor = color;
}


/**
 * Set colors for lines of graphs.
 *
 * @param colors - <code>const std::vector < QColor > &</code> - colors for lines of graphs.
 */
void DeskPainter::setColors (const std::vector < QColor > &colors)
{
    this->colors = colors;
}


/**
 * Set flag for drawing grid on widget.
 *
 * @param flag - bool
 */
void DeskPainter::setDrawGrid (const bool &flag)
{
    this->drawGrids = flag;
}


/**
 * Set color for line of graph.
 *
 * @param color - <code>const QColor</code> - color for line of graph.
 */
void DeskPainter::setGridColor (const QColor &color)
{
    this->gridColor = color;
}


/**
 * Set size of the widget.
 *
 * @param size - <code>QRectF</code> - rectangle of widget.
 */
void DeskPainter::setSize (const QRectF &size)
{
    this->size = size;
}
