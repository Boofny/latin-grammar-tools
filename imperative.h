#pragma once

#include <iostream>
#include <string>
#include <conio.h>
#include "conjugation.h"

void imperativeform() {
    system("CLS");
    LatinVerb v;

    std::cout << "Enter in a verb in Latin:\n";
    std::cin.ignore();
    std::getline(std::cin, v.verb);

    std::cout << '\n';

    std::cout << "2. singularis: " << v.getBaseVerb(v.verb).append("!") << '\n';
    std::cout << "2. pluralis:   " << v.getBaseVerb(v.verb).append("te!") << '\n'; 
}