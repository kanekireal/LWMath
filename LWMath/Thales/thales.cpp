//
//  thales.cpp
//  LWMath
//
//  Created by LEVASSEUR Wesley on 29/01/2019.
//  Copyright © 2019 LEVASSEUR Wesley. All rights reserved.
//

#include <iostream>
#include "thales.hpp"
#include <math.h>

float LW::Math::Thales::cal_side_1(float same_side_1, float same_side_2, float other_side_1) {
    return same_side_1*other_side_1/same_side_2;
}

float LW::Math::Thales::cal_side_2(float same_side_1, float same_side_2, float other_side_2) {
    return same_side_2*other_side_2/same_side_1;
}

bool LW::Math::Thales::verify(float side_left_1, float side_left_2, float side_right_1, float side_right_2, float side_down_1, float side_down_2) {
    return equals(side_left_1/side_left_2, side_right_1/side_right_2, side_down_1/side_down_2);
}


