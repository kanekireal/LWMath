//
//  pythagore.cpp
//  Pythagore
//
//  Created by LEVASSEUR Wesley on 27/01/2019.
//  Copyright © 2019 LEVASSEUR Wesley. All rights reserved.
//

#include "pythagoras.hpp"
#include <math.h>

double LW::Math::Pythagoras::cal_hypotenuse(double other_1, double other_2) {
    return sqrt(pow(other_1, 2.0) + pow(other_2, 2.0));
}

double LW::Math::Pythagoras::cal_other(double hypothenuse, double other) {
    return sqrt(pow(hypothenuse, 2.0) - pow(other, 2.0));
}

bool LW::Math::Pythagoras::verify(double hypothenuse, double other_1, double other_2) {
    return pow(hypothenuse, 2.0) == pow(other_1, 2.0) + pow(other_2, 2.0);
}
