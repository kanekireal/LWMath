//
//  main.cpp
//  Pythagore
//
//  Created by LEVASSEUR Wesley on 27/01/2019.
//  Copyright © 2019 LEVASSEUR Wesley. All rights reserved.
//

#include <iostream>
#include "Pythagoras/pythagoras.cpp"

int main(int argc, const char * argv[]) {
    
    /**
     @todo FRENCH
     */
    
    //true
    double AC = 9, BC=13;
    double AB = LW::Math::Pythagoras::cal_hypotenuse(AC, BC);
    std::cout << "Dans le triangle ABC, rectancle en C d'après le théorème de Pythagore on a:\n"
    << "[AB² = AC² + BC²]: sachant que AC=" << AC << " et BC=" << BC << " donc AB=" << AB
    << std::endl;
    std::cout << "[AC² = AB² - BC²]: sachant que AB=" << AB << " et BC="  << BC
    << " donc AC=" << LW::Math::Pythagoras::cal_other(AB, BC)
    << std::endl;
    std::cout << "[BC² = AB² - AC²]: sachant que AB=" << AB << " et AC="  << AC
    << " donc AC=" << LW::Math::Pythagoras::cal_other(AB, AC)
    << std::endl;
    std::cout << "[AB² = AC² + BC²]: sachant que AB=" << AB << ", AC=" << AC << " et BC=" << BC
    << " est " << (LW::Math::Pythagoras::verify(AB, AC, BC) ? "VRAI" : "FAUX")
    << std::endl;
    std::cout << "\n" << std::endl;
    
    //true
    AC = 24; BC = 32; AB = LW::Math::Pythagoras::cal_hypotenuse(AC, BC);
    std::cout << "Dans le triangle ABC, rectancle en C d'après le théorème de Pythagore on a:\n"
    << "[AB² = AC² + BC²]: sachant que AC=" << AC << " et BC=" << BC << " donc AB=" << AB
    << std::endl;
    std::cout << "[AC² = AB² - BC²]: sachant que AB=" << AB << " et BC="  << BC
    << " donc AC=" << LW::Math::Pythagoras::cal_other(AB, BC)
    << std::endl;
    std::cout << "[BC² = AB² - AC²]: sachant que AB=" << AB << " et AC="  << AC
    << " donc AC=" << LW::Math::Pythagoras::cal_other(AB, AC)
    << std::endl;
    std::cout << "[AB² = AC² + BC²]: sachant que AB=" << AB << ", AC=" << AC << " et BC=" << BC
    << " est " << (LW::Math::Pythagoras::verify(AB, AC, BC) ? "VRAI" : "FAUX")
    << std::endl;
    std::cout << "\n" << std::endl;
    
    //false
    AC = 4; BC=36; AB = 12;
    std::cout << "[AB² = AC² + BC²]: sachant que AB=" << AB << ", AC=" << AC << " et BC=" << BC
    << " est " << (LW::Math::Pythagoras::verify(AB, AC, BC) ? "VRAI" : "FAUX")
    << std::endl;
    std::cout << "\n\n" << std::endl;
    
    /**
     @todo ENGLISH
     */
    
    //true
    AC = 9; BC=13;
    AB = LW::Math::Pythagoras::cal_hypotenuse(AC, BC);
    std::cout << "In the triangle ABC, rectangle in C according to the theorem of Pythagoras we have:\n"
    << "[AB² = AC² + BC²]: knowing that AC=" << AC << " and BC=" << BC << " so AB=" << AB
    << std::endl;
    std::cout << "[AC² = AB² - BC²]: knowing that AB=" << AB << " and BC="  << BC
    << " so AC=" << LW::Math::Pythagoras::cal_other(AB, BC)
    << std::endl;
    std::cout << "[BC² = AB² - AC²]: knowing that AB=" << AB << " and AC="  << AC
    << " so AC=" << LW::Math::Pythagoras::cal_other(AB, AC)
    << std::endl;
    std::cout << "[AB² = AC² + BC²]: knowing that AB=" << AB << ", AC=" << AC << " and BC=" << BC
    << " is " << (LW::Math::Pythagoras::verify(AB, AC, BC) ? "TRUE" : "FALSE")
    << std::endl;
    std::cout << "\n" << std::endl;
    
    //true
    AC = 24; BC = 32; AB = LW::Math::Pythagoras::cal_hypotenuse(AC, BC);
    std::cout << "In the triangle ABC, rectangle in C according to the theorem of Pythagoras we have:\n"
    << "[AB² = AC² + BC²]: knowing that AC=" << AC << " and BC=" << BC << " so AB=" << AB
    << std::endl;
    std::cout << "[AC² = AB² - BC²]: knowing that AB=" << AB << " and BC="  << BC
    << " so AC=" << LW::Math::Pythagoras::cal_other(AB, BC)
    << std::endl;
    std::cout << "[BC² = AB² - AC²]: knowing that AB=" << AB << " and AC="  << AC
    << " so AC=" << LW::Math::Pythagoras::cal_other(AB, AC)
    << std::endl;
    std::cout << "[AB² = AC² + BC²]: knowing that AB=" << AB << ", AC=" << AC << " and BC=" << BC
    << " is " << (LW::Math::Pythagoras::verify(AB, AC, BC) ? "TRUE" : "FALSE")
    << std::endl;
    std::cout << "\n" << std::endl;
    
    //false
    AC = 4; BC=36; AB = 12;
    std::cout << "[AB² = AC² + BC²]: knowing that AB=" << AB << ", AC=" << AC << " and BC=" << BC
    << " is " << (LW::Math::Pythagoras::verify(AB, AC, BC) ? "TRUE" : "FALSE")
    << std::endl;
    std::cout << "\n\n" << std::endl;
    
    return 0;
}
