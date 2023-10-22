#pragma once

#include <iostream>
#include <string>

class LatinVerb {
    public:
        std::string getTenseVerb(std::string verb);
        std::string getBaseVerb(std::string verb);
};

std::string LatinVerb::getTenseVerb(std::string verb) {
    std::string returnTenseVerb = verb.erase(verb.length() - 3);
    return returnTenseVerb.append("o");
}

void conjugate1st() {
    LatinVerb v;
    std::string verb;

    std::cout << "Enter in a verb in Latin:\n";
    std::cin >> verb;

    std::cout << v.getTenseVerb(verb) << '\n';
}