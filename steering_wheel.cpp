
#include <iostream>
#include "steering_wheel.h"

namespace carparts {
    void SteeringWheel::setPosition(int position)
    {
        SteeringWheel::position = position;
    }

    SteeringWheel::SteeringWheel()
    {
        SteeringWheel::position = 0;
    }

    int SteeringWheel::getPosition()
    {
        return SteeringWheel::position;
    }
}

