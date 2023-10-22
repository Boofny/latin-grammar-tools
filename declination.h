#pragma once

#include <iostream>
#include <string>
#include <conio.h>

class LatinNoun {
    public:
        std::string noun;
        std::string getBaseNoun1st(std::string noun);
};

std::string LatinNoun::getBaseNoun1st(std::string noun) {
    return noun.erase(noun.length() - 1);
}

void declinate1st() {
    system("CLS");
    LatinNoun n;

    std::cout << "Enter in a noun in Latin:\n";
    std::cin.ignore();
    std::getline(std::cin, n.noun);

    std::cout << '\n';

    std::cout << "Singularis:\n";
    std::cout << "N   " << n.getBaseNoun1st(n.noun).append("a") << '\n';
    std::cout << "G   " << n.getBaseNoun1st(n.noun).append("ae") << '\n';
    std::cout << "D   " << n.getBaseNoun1st(n.noun).append("ae") << '\n';
    std::cout << "Acc " << n.getBaseNoun1st(n.noun).append("am") << '\n';
    std::cout << "V   " << n.getBaseNoun1st(n.noun).append("a") << '\n';
    std::cout << "Abl " << n.getBaseNoun1st(n.noun).append("a") << '\n';

    std::cout << '\n';

    std::cout << "Pluralis:\n";
    std::cout << "N   " << n.getBaseNoun1st(n.noun).append("ae") << '\n';
    std::cout << "G   " << n.getBaseNoun1st(n.noun).append("arum") << '\n';
    std::cout << "D   " << n.getBaseNoun1st(n.noun).append("is") << '\n';
    std::cout << "Acc " << n.getBaseNoun1st(n.noun).append("as") << '\n';
    std::cout << "V   " << n.getBaseNoun1st(n.noun).append("ae") << '\n';
    std::cout << "Abl " << n.getBaseNoun1st(n.noun).append("is") << '\n';
}