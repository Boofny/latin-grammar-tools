#pragma once

#include <iostream>
#include <string>

class LatinNoun {
    public:
        std::string noun;
        std::string getBaseNoun(std::string noun);
};

std::string LatinNoun::getBaseNoun(std::string noun) {
    return noun.erase(noun.length() - 1);
}

void declinate1st() {
    LatinNoun n;

    std::cout << "Enter in a noun in Latin:\n";
    std::cin.ignore();
    std::getline(std::cin, n.noun);

    std::cout << n.getBaseNoun(n.noun) << '\n';
}