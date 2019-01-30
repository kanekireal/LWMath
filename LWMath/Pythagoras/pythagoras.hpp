//
//  pythagore.hpp
//  Pythagore
//
//  Created by LEVASSEUR Wesley on 27/01/2019.
//  Copyright © 2019 LEVASSEUR Wesley. All rights reserved.
//

#ifndef pythagoras_hpp
#define pythagoras_hpp

#include <stdio.h>

class IPythagoras {
public:
    static float calculateHypotenuse(float knownSide1, float knownSide2);
    static float calulateUnknownSide(float knownHypotenuse, float knownSide);
    static bool verify(float knownHypotenuse, float knownSide1, float knownSide2);
};

#endif /* pythagore_hpp */
