//
//  thales.hpp
//  LWMath
//
//  Created by LEVASSEUR Wesley on 29/01/2019.
//  Copyright © 2019 LEVASSEUR Wesley. All rights reserved.
//

#ifndef thales_hpp
#define thales_hpp

#include <stdio.h>

class LW {
public:
    class Math {
    public:
        class Thales {
        public:
            //static double cal_hypotenuse(double other_1, double other_2);
            //static double cal_other(double hypothenuse, double other);
            static float cal_side_1(float same_side_1, float same_side_2, float other_side_1);
            static float cal_side_2(float same_side_1, float same_side_2, float other_side_2);
            static bool verify(float side_left_1, float side_left_2, float side_right_1, float side_right_2, float side_down_1, float side_down_2);
        };
    };
};

static bool equals(float a, float b) {
    const float delta = 0.00001;
    return a >= b - delta && a <= b + delta;
}

static bool equals(float a, float b, float c) {
    return equals(a, b) && equals(b, c);
}


#endif /* thales_hpp */
