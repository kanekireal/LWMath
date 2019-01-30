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

class IThales {
public:
    static float calculateUnknownNumerator(float knownFractionNumerator, float knownFractionDenominator, float knownDenominator);
    static float calculateUnknownDenominator(float knownFractionNumerator, float knownFractionDenominator, float knownNumerator);
    static bool verify(float knownFractionNumerator1, float knownFractionDenominator1, float knownFractionNumerator2, float knownFractionDenominator2, float knownFractionNumerator3, float knownFractionDenominator3);
};

#endif /* thales_hpp */
