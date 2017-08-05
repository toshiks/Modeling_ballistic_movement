/**
 * @file GraphPainter.cpp
 * Implementation of the drawing process.
 *
 * @author Anton Klochkov (tklochkov@gmail.com)
 * @date 10.05.2017
 * @version 1.0
 */

#ifndef PHIYSICS_GRAPHPAINTER_H
#define PHIYSICS_GRAPHPAINTER_H

#include "DeskPainter.h"

class GraphPainter final : public DeskPainter
{
    public:

        GraphPainter (QPaintDevice* widget);

        ~GraphPainter ()
        { };

        void paint (int indexInArrayOfData, int leftBorderOfData, int rightBorderOfData, int mouseCoordinateX) override;

    private:

        void drawLine (QPainter &painter,
                       float currentMax, QColor &lineColor,
                       QColor &bodyColor, int leftBorderOfData, int rightBorderOfData, int mouseCoordinateX) const;

        std::vector < QColor > colors;
};


#endif //PHIYSICS_GRAPHPAINTER_H
