//
//  lwmath.cpp
//  LWMath
//
//  Created by LEVASSEUR Wesley on 30/01/2019.
//  Copyright © 2019 LEVASSEUR Wesley. All rights reserved.
//

#include "lwmath.hpp"
#include <math.h>

float LWMath::Thales::calculateUnknownNumerator(float knownFractionNumerator, float knownFractionDenominator, float knownDenominator) {
    return knownFractionNumerator * knownDenominator / knownFractionDenominator;
}

float LWMath::Thales::calculateUnknownDenominator(float knownFractionNumerator, float knownFractionDenominator, float knownNumerator) {
    return knownFractionDenominator * knownNumerator / knownFractionNumerator;
}

bool LWMath::Thales::verify(float knownFractionNumerator1, float knownFractionDenominator1, float knownFractionNumerator2, float knownFractionDenominator2, float knownFractionNumerator3, float knownFractionDenominator3) {
    return LWMath::equals(knownFractionNumerator1 / knownFractionDenominator1,
                  knownFractionNumerator2 / knownFractionDenominator2,
                  knownFractionNumerator3 / knownFractionDenominator3);
}

float LWMath::Pythagoras::calculateHypotenuse(float knownSide1, float knownSide2) {
    return sqrt(pow(knownSide1, 2.0) + pow(knownSide2, 2.0));
}

float LWMath::Pythagoras::calulateUnknownSide(float knownHypotenuse, float knownSide) {
    return sqrt(pow(knownHypotenuse, 2.0) - pow(knownSide, 2.0));
}

bool LWMath::Pythagoras::verify(float knownHypotenuse, float knownSide1, float knownSide2) {
    return pow(knownHypotenuse, 2.0) == pow(knownSide1, 2.0) + pow(knownSide2, 2.0);
}
