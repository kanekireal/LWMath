//
//  lwmath.hpp
//  LWMath
//
//  Created by LEVASSEUR Wesley on 30/01/2019.
//  Copyright © 2019 LEVASSEUR Wesley. All rights reserved.
//

#ifndef lwmath_hpp
#define lwmath_hpp

#include <stdio.h>
#include "Thales/thales.hpp"
#include "Pythagoras/pythagoras.hpp"

class LWMath {
public:
    class Thales: public IThales {
    public:
        static float calculateUnknownNumerator(float knownFractionNumerator, float knownFractionDenominator, float knownDenominator);
        static float calculateUnknownDenominator(float knownFractionNumerator, float knownFractionDenominator, float knownNumerator);
        static bool verify(float knownFractionNumerator1, float knownFractionDenominator1, float knownFractionNumerator2, float knownFractionDenominator2, float knownFractionNumerator3, float knownFractionDenominator3);
    };
    class Pythagoras: public IPythagoras {
    public:
        static float calculateHypotenuse(float knownSide1, float knownSide2);
        static float calulateUnknownSide(float knownHypotenuse, float knownSide);
        static bool verify(float knownHypotenuse, float knownSide1, float knownSide2);
    };
    
    static bool equals(float a, float b) {
        const float delta = 0.00001;
        return a >= b - delta && a <= b + delta;
    }
    
    static bool equals(float a, float b, float c) {
        return equals(a, b) && equals(b, c);
    }
};

#endif /* lwmath_hpp */
