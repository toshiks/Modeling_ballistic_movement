/**
 * @file PhysicalEngine.cpp
 * Physical engine for generation of processes of ballistic movement.
 *
 * @author Anton Klochkov (tklochkov@gmail.com)
 * @date 10.05.2017
 * @version 1.0
 */

#include "PhysicalEngine.h"

/**
 * Constructor assigns the initial minimum requirements for work.
 * @param surface - type of land
 */
PhysicalEngine::PhysicalEngine (SURFACE surface) :
        typeOfLand_(surface), alpha_(0.7853975), startingSpeed_(100), weight_(1), mask(0), t_(0), startX_(0),
        data_(6), count_(2), allTime_(0)
{ }


/**
 * The default constructor.
 * The land type is asphalt by default.
 */
PhysicalEngine::PhysicalEngine () : PhysicalEngine(SURFACE::SURFACE_ASPHALT)
{ }


/**
 * Setting bits in the mask.
 *
 * The mask consists of 6 bits: 010101
 *
 * Since The bit index is a power of two, then <code>TYPEOFWIDGET</code> is the power of two,
 * and <code>TYPEOFWIDGET</code> is the multiplier.
 * Therefore, the place in the mask for a particular widget is equal to the multiplication:
 * <code>TYPEOFWIDGET * TYPEOFWIDGET</code>.
 *
 * The X axis is uniformly rectilinear, and the Y axis is equally accelerated,
 * so there is a timer of the whole time - for the X axis, and a cyclic, which is reset, for the Y axis.
 *
 * @param bitForMask - a special field for eliminating collisions of multithreading.
 */
void PhysicalEngine::setMask (short bitForMask)
{
    mask |= bitForMask;

    if ( mask != 63 )
        return;

    t_ += count_ * step;
    allTime_ += count_ * step;

    emit updateInfo(allTime_,
                    data_[ 2 ][ data_[ 2 ].getSize() - 1 ],
                    data_[ 3 ][ data_[ 3 ].getSize() - 1 ],
                    data_[ 0 ][ data_[ 0 ].getSize() - 1 ],
                    data_[ 1 ][ data_[ 1 ].getSize() - 1 ],
                    data_[ 4 ][ data_[ 4 ].getSize() - 1 ],
                    data_[ 5 ][ data_[ 5 ].getSize() - 1 ]);

    if ( currentY_ <= 0 ) {
        startingSpeed_ = currentV_ * ( 1 - static_cast<float>(typeOfLand_) / 100 );

        if ( getCurrentTime() < 0.05 )
            startingSpeed_ = 0;

        currentY_ = 0;
        startX_ = currentX_;
        t_ = 0;
    }

    mask = 0;
}

/**
 * Solving equations of ballistic movement.
 * Generates data once. Subsequent attempts are ignored by the mask until all the widgets are updated.
 *
 * @param typeOfWidget - it's TYPEOFWIDGET: Speed, Coordinates or Energy
 * @param typeOfAxis   - it's TYPEOFAXIS: X or Y
 */
void PhysicalEngine::generate (TYPEOFWIDGET typeOfWidget, TYPEOFAXIS typeOfAxis)
{

    if ( mask ) {
        setMask(typeOfWidget * typeOfAxis);
        return;
    }

    float Vx = startingSpeed_ * static_cast<float >(cos(alpha_));
    float Vy = startingSpeed_ * static_cast<float >(sin(alpha_));
    float time;
    float momentX;
    float momentY;
    float momentVx;
    float momentVy;
    float energyX;
    float energyY;

    for ( float i = 0; i < count_; i++ ) {
        //Physical formulas
        time = t_ + step * i;

        momentVx = Vx;
        momentVy = std::max(0.0f, fabsf(Vy - g_ * time));

        momentX = startX_ + std::max(0.0f, Vx * time);
        momentY = Vy * time - ( g_ * time * time ) / 2;

        energyX = weight_ * static_cast<float>( pow(momentVx, 2) + pow(momentVy, 2) ) / 2;
        energyY = weight_ * g_ * momentY;

        if ( momentY >= 0 && getCurrentTime() > 0.05 && time < getCurrentTime() ) {
            data_[ 0 ].push( momentX  );
            data_[ 1 ].push( momentY  );
            data_[ 2 ].push( momentVx );
            data_[ 3 ].push( momentVy );
            data_[ 4 ].push( energyX  );
            data_[ 5 ].push( energyY  );
            times_.push( allTime_ + step * i );
        } else {

            //Stop generation.
            currentY_ = -1;
            currentV_ = static_cast<float>(sqrt( pow(data_[ 2 ][ data_[ 2 ].getSize() - 1 ], 2) +
                                                 pow(data_[ 3 ][ data_[ 3 ].getSize() - 1 ], 2) ));
            mask = 63;
            setMask( typeOfWidget * typeOfAxis );
            return;
        }
    }

    currentV_ = static_cast<float >(sqrt(pow(data_[ 2 ][ data_[ 2 ].getSize() - 1 ], 2) +
                                         pow(data_[ 3 ][ data_[ 3 ].getSize() - 1 ], 2)));

    currentY_ = data_[ 1 ][ data_[ 1 ].getSize() - 1 ];
    currentX_ = data_[ 0 ][ data_[ 0 ].getSize() - 1 ];

    setMask( typeOfWidget * typeOfAxis );
}


/**
 * Function for get a const pointer to the data of the current widget.
 *
 * @param typeOfWidget - it's TYPEOFWIDGET: Speed, Coordinates or Energy
 * @param typeOfAxis   - it's TYPEOFAXIS: X or Y
 *
 * @return const QueueWithMax<float>* - a const pointer to the data of the current widget.
 */
const QueueWithMax < float >* PhysicalEngine::getData (TYPEOFWIDGET typeOfWidget, TYPEOFAXIS typeOfAxis) const
{
    size_t ind = static_cast<size_t>( log2( typeOfWidget * typeOfAxis ) );

    return &data_[ ind ];
}


/**
 * Getting points on the timeline.
 *
 * @return const QueueWithMax<float>* - a const pointer to the data of the timeline.
 */
const QueueWithMax < float >* PhysicalEngine::getTimes () const
{
    return &times_;
}


/**
 * Get current time of ballistic movement.
 * @return const float - current time
 */
const float PhysicalEngine::getCurrentTime () const
{
    return 2 * startingSpeed_ * static_cast<float >(sin(alpha_)) / g_;
}

/**
 * @param surface - type of land for friction in int
 */
void PhysicalEngine::setTypeLand (int surface)
{
    switch (surface){
        case 40:
            typeOfLand_ = SURFACE::SURFACE_GRASS;
            break;
        case 70:
            typeOfLand_ = SURFACE::SURFACE_SAND;
            break;
        default:
            typeOfLand_ = SURFACE_ASPHALT;

    }
}



/**
 * @param surface - type of land for friction
 */
void PhysicalEngine::setTypeLand (SURFACE surface)
{
    typeOfLand_ = surface;
}


/**
 * @param alpha - initial angle of the ball
 */
void PhysicalEngine::setAlpha (float alpha)
{
    this->alpha_ = PI_ * alpha / 180;
}


/**
 * @param startingSpeed - speed for start in meters per second
 */
void PhysicalEngine::setStartingSpeed (float startingSpeed)
{
    if ( allTime_ == 0 )
        this->startingSpeed_ = startingSpeed;
}


/**
 * @param weight - weight of ball in kilograms
 */
void PhysicalEngine::setWeight (float weight)
{
    this->weight_ = weight;
}


/**
 * Remove all data.
 */
void PhysicalEngine::clearGenerator ()
{
    for ( auto &i: data_ )
        while ( i.getSize() )
            i.pop();
}


/**
 * Remove temp data.
 */
void PhysicalEngine::clearTempData ()
{
    t_        = 0;
    mask      = 0;
    startX_   = 0;
    allTime_  = 0;
    currentY_ = 0;
    currentV_ = 0;
}
