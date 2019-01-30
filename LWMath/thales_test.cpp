//
//  thales_test.cpp
//  LWMath
//
//  Created by LEVASSEUR Wesley on 29/01/2019.
//  Copyright © 2019 LEVASSEUR Wesley. All rights reserved.
//

#include <iostream>
#include "lwmath.cpp"

int main(int argc, const char * argv[]) {
    
    /**
     @todo FRENCH
     */
    
    //true
    float AB = 50, AC = 27,
    AD = 32, DE=23.68,
    BC = LWMath::Thales::calculateUnknownNumerator(AB, AD, DE),
    AE = LWMath::Thales::calculateUnknownDenominator(AB, AD, AC);
    std::cout << "Dans les triangle ABC et ADE, ont le sommet A en commun, les points ADB sont alignés ainsi que AEC, les droites BC et DE sont parralèlle, d'après le théorème de Thalès on a:\n"
    << "[AB/AD = AC/AC = BC/DE]: sachant que AB=" << AB << ", AD=" << AD << " , AC=" << AC << " DE=" << DE
    << " donc AE=" << AE << " et BC=" << BC
    << " est " << (LWMath::Thales::verify(AB, AD, AC, AE, BC, DE) ? "VRAI" : "FAUX")
    << std::endl;
    std::cout << "\n" << std::endl;
    
    //true
    AB = 374; AC = 148;
    AD = 244; DE=146.1390374332;
    BC = LWMath::Thales::calculateUnknownNumerator(AB, AD, DE);
    AE = LWMath::Thales::calculateUnknownDenominator(AB, AD, AC);
    std::cout << "Dans les triangle ABC et ADE, ont le sommet A en commun, les points ADB sont alignés ainsi que AEC, les droites BC et DE sont parralèlle, d'après le théorème de Thalès on a:\n"
    << "[AB/AD = AC/AC = BC/DE]: sachant que AB=" << AB << ", AD=" << AD << " , AC=" << AC << " DE=" << DE
    << " donc AE=" << AE << " et BC=" << BC
    << " est " << (LWMath::Thales::verify(AB, AD, AC, AE, BC, DE) ? "VRAI" : "FAUX")
    << std::endl;
    std::cout << "\n" << std::endl;
    
    //false
    AB = 24; AC = 13.987; BC = 46;
    AD = 36.4; DE=73.68; AE = 98;
    std::cout << "[AB/AD = AC/AC = BC/DE]: sachant que AB=" << AB << ", AD=" << AD << " , AC=" << AC << " DE=" << DE
    << " donc AE=" << AE << " et BC=" << BC
    << " est " << (LWMath::Thales::verify(AB, AD, AC, AE, BC, DE) ? "VRAI" : "FAUX")
    << std::endl;
    std::cout << "\n\n" << std::endl;
    
    /**
     @todo ENGLISH
     */
    
    //true
    AB = 50; AC = 27;
    AD = 32; DE=23.68;
    BC = LWMath::Thales::calculateUnknownNumerator(AB, AD, DE);
    AE = LWMath::Thales::calculateUnknownDenominator(AB, AD, AC);
    std::cout << "In the triangle ABC and ADE, have the vertex A in common, the points ADB are aligned as well as AEC, the straight lines BC and DE are parallel, according to the Thales theorem we have:\n"
    << "[AB/AD = AC/AC = BC/DE]: knowing that AB=" << AB << ", AD=" << AD << " , AC=" << AC << " DE=" << DE
    << " so AE=" << AE << " and BC=" << BC
    << " is " << (LWMath::Thales::verify(AB, AD, AC, AE, BC, DE) ? "TRUE" : "FALSE")
    << std::endl;
    std::cout << "\n" << std::endl;
    
    //true
    AB = 374; AC = 148;
    AD = 244; DE=146.1390374332;
    BC = LWMath::Thales::calculateUnknownNumerator(AB, AD, DE);
    AE = LWMath::Thales::calculateUnknownDenominator(AB, AD, AC);
    std::cout << "In the triangle ABC and ADE, have the vertex A in common, the points ADB are aligned as well as AEC, the straight lines BC and DE are parallel, according to the Thales theorem we have:\n"
    << "[AB/AD = AC/AC = BC/DE]: knowing that AB=" << AB << ", AD=" << AD << " , AC=" << AC << " DE=" << DE
    << " so AE=" << AE << " and BC=" << BC
    << " is " << (LWMath::Thales::verify(AB, AD, AC, AE, BC, DE) ? "TRUE" : "FALSE")
    << std::endl;
    std::cout << "\n" << std::endl;
    
    //false
    AB = 24; AC = 13.987; BC = 46;
    AD = 36.4; DE=73.68; AE = 98;
    std::cout << "[AB/AD = AC/AC = BC/DE]: knowing that AB=" << AB << ", AD=" << AD << " , AC=" << AC << " DE=" << DE
    << " so AE=" << AE << " and BC=" << BC
    << " is " << (LWMath::Thales::verify(AB, AD, AC, AE, BC, DE) ? "TRUE" : "FALSE")
    << std::endl;
    std::cout << "\n\n" << std::endl;
    return 0;
}
