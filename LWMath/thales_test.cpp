//
//  thales_test.cpp
//  LWMath
//
//  Created by LEVASSEUR Wesley on 29/01/2019.
//  Copyright © 2019 LEVASSEUR Wesley. All rights reserved.
//

#include <iostream>
#include "Thales/thales.cpp"

int main(int argc, const char * argv[]) {
    
    /**
     @todo FRENCH
     */
    
    //true
    double AB = 50, AC = 27,
    AD = 32, DE=23.68,
    BC = LW::Math::Thales::cal_side_1(AB, AD, DE),
    AE = LW::Math::Thales::cal_side_2(AB, AD, AC);
    std::cout << "Dans les triangle ABC et ADE, ont le sommet A en commun, les points ADB sont alignés ainsi que AEC, les droites BC et DE sont parralèlle, d'après le théorème de Thalès on a:\n"
    << "[AB/AD = AC/AC = BC/DE]: sachant que AB=" << AB << ", AD=" << AD << " , AC=" << AC << " DE=" << DE
    << " donc AE=" << AE << " et BC=" << BC
    << " est " << (LW::Math::Thales::verify(AB, AD, AC, AE, BC, DE) ? "VRAI" : "FAUX")
    << std::endl;
    std::cout << "\n" << std::endl;
    
    //true
    AB = 374; AC = 148;
    AD = 244; DE=146.1390374332;
    BC = LW::Math::Thales::cal_side_1(AB, AD, DE);
    AE = LW::Math::Thales::cal_side_2(AB, AD, AC);
    std::cout << "Dans les triangle ABC et ADE, ont le sommet A en commun, les points ADB sont alignés ainsi que AEC, les droites BC et DE sont parralèlle, d'après le théorème de Thalès on a:\n"
    << "[AB/AD = AC/AC = BC/DE]: sachant que AB=" << AB << ", AD=" << AD << " , AC=" << AC << " DE=" << DE
    << " donc AE=" << AE << " et BC=" << BC
    << " est " << (LW::Math::Thales::verify(AB, AD, AC, AE, BC, DE) ? "VRAI" : "FAUX")
    << std::endl;
    std::cout << "\n" << std::endl;
    
    //false
    AB = 24; AC = 13.987; BC = 46;
    AD = 36.4; DE=73.68; AE = 98;
    std::cout << "[AB/AD = AC/AC = BC/DE]: sachant que AB=" << AB << ", AD=" << AD << " , AC=" << AC << " DE=" << DE
    << " donc AE=" << AE << " et BC=" << BC
    << " est " << (LW::Math::Thales::verify(AB, AD, AC, AE, BC, DE) ? "VRAI" : "FAUX")
    << std::endl;
    std::cout << "\n\n" << std::endl;
    return 0;
}
