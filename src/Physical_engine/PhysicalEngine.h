/**
 * @file PhysicalEngine.h
 * Physical engine for generation of processes of ballistic movement.
 *
 * @author Anton Klochkov (tklochkov@gmail.com)
 * @date 10.05.2017
 * @version 1.0
 */

#ifndef PHIYSICS_PHYSICSGENERATOR_H
#define PHIYSICS_PHYSICSGENERATOR_H

#include <QtCore/QObject>
#include <vector>

#include "../Queue/QueueWithMax.h"

/*
 *  Enumeration fields for separating widgets.
 *  Numbers are chosen for convenience of work with calculations.
 */
enum TYPEOFWIDGET
{
    TYPEOFWIDGET_COORDINATES = 1,
    TYPEOFWIDGET_SPEED = 4,
    TYPEOFWIDGET_ENERGY = 16
};


enum TYPEOFAXIS
{
    TYPEOFAXIS_X = 1,
    TYPEOFAXIS_Y = 2
};


enum SURFACE
{
    SURFACE_ASPHALT = 20,
    SURFACE_GRASS = 40,
    SURFACE_SAND = 70
};


class PhysicalEngine : public QObject
{
    Q_OBJECT

    public:

        PhysicalEngine (SURFACE surface);
        PhysicalEngine ();
        ~PhysicalEngine ()
        { };

        void generate (TYPEOFWIDGET typeOfWidget, TYPEOFAXIS typeOfAxis);

        const QueueWithMax < float >* getData (TYPEOFWIDGET typeL, TYPEOFAXIS typeA) const;
        const QueueWithMax < float >* getTimes () const;

        const float getCurrentTime () const;

        void clearTempData ();

    public slots:

        void setTypeLand      (SURFACE surface);
        void setTypeLand      (int surface);
        void setAlpha         (float alpha);
        void setStartingSpeed (float startingSpeed);
        void setWeight        (float weight);
        void clearGenerator   ();

    signals:

        void updateInfo (float curTime, float speedX, float speedY, float coordX, float coordY, float energyX,
                         float energyY);

    private:

        void setMask (short bitForMask);

        int mask;

        const float g_ = 9.80665;
        const float PI_ = 3.14159;
        const float step = 0.005;

        SURFACE typeOfLand_;
        float alpha_;
        float startingSpeed_;
        float weight_;

        float currentY_;
        float currentX_;
        float currentV_;
        float startX_;
        float t_;
        float allTime_;
        int count_;
        std::vector < QueueWithMax < float > > data_;
        QueueWithMax < float > times_;
};


#endif //PHIYSICS_PHYSICSGENERATOR_H
