/**
 * @file DeskPainter.h
 * Interface for drawing on GraphWidget
 *
 * @author Anton Klochkov (tklochkov@gmail.com)
 * @date 10.05.2017
 * @version 1.0
 */

#ifndef PHIYSICS_PAINTER_H
#define PHIYSICS_PAINTER_H

#include <vector>
#include <QPainter>

#include "../Queue/QueueWithMax.h"

class DeskPainter
{

    public:

        DeskPainter (QPaintDevice* widget);

        virtual ~DeskPainter ()
        { };

        virtual void paint (int indexInArrayOfData, int leftBorderOfData, int rightBorderOfData, int mouseCoordinateX)
        { };

        void setSize (const QRectF &size);

        void setData      (const QueueWithMax < float >* data);
        void setTimes     (const QueueWithMax < float >* times);

        void setDrawGrid (const bool &flag);

        void drawBackground (QPainter &paint) const;
        void drawGrid       (QPainter &paint) const;

        void setColors          (const std::vector < QColor > &colors);
        void setBackgroundColor (const QColor &color);
        void setGridColor       (const QColor &color);

    protected:

        QRectF size;

        int widthStep;
        int heightStep;

        bool drawGrids;

        QColor gridColor;
        QColor backgroundColor;
        std::vector < QColor > colors;

        QPaintDevice* widget;

        const QueueWithMax < float >* data;
        const QueueWithMax < float >* times;
};


#endif //PHIYSICS_PAINTER_H
