/**
 * @file GraphWidget.h
 * Creating interface for functional of graphical widget.
 *
 * @author Anton Klochkov (tklochkov@gmail.com)
 * @date 10.05.2017
 * @version 1.0
 */

#ifndef PHIYSICS_GRAPHWIDGET_H
#define PHIYSICS_GRAPHWIDGET_H

#include <QWidget>
#include <QTimer>

#include "GraphPainter.h"
#include "../Physical_engine/PhysicalEngine.h"
#include "../Queue/QueueWithMax.h"

class GraphWidget final : public QWidget
{
    Q_OBJECT

    public:

        explicit GraphWidget (QWidget* parent = 0);
        ~GraphWidget ();

        void paintEvent (QPaintEvent* e) override;

        void setTypeWidget     (TYPEOFWIDGET typeOfWidget);
        void setTypeAxis       (TYPEOFAXIS typeOfAxis);
        void setPhysicalEngine (PhysicalEngine* engine);

    private slots:

        void updateData ();

    public slots:

        void resizeEvent    (QResizeEvent* e) override;
        void startTimer     ();
        void wheelEvent     (QWheelEvent* event) override;
        void mouseMoveEvent (QMouseEvent* event) override;
        void leaveEvent     (QEvent* event) override;

    signals:

        void endShow ();

    private:

        TYPEOFWIDGET typeOfWidget;
        TYPEOFAXIS   typeOfAxis;

        int leftBorderOfData;
        int rightBorderOfData;
        int sizeData;

        int mouseCoordinateX;

        QTimer* timer;

        DeskPainter* deskPainter;

        PhysicalEngine* engine;
};


#endif //PHIYSICS_GRAPHWIDGET_H
