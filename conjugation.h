#pragma once

#include <iostream>
#include <string>

class LatinVerb {
    public:
        std::string verb;
        std::string getTenseVerb(std::string verb);
        std::string getBaseVerb(std::string verb);
};

std::string LatinVerb::getTenseVerb(std::string verb) {
    std::string returnTenseVerb = verb.erase(verb.length() - 3);
    return returnTenseVerb.append("o");
}

std::string LatinVerb::getBaseVerb(std::string verb) {
    return verb.erase(verb.length() - 2);
} 

void conjugate1st() {
    LatinVerb v;

    std::cout << "Enter in a verb in Latin:\n";
    std::cin >> v.verb;

    std::cout << v.getTenseVerb(v.verb) << '\n';
    std::cout << v.getBaseVerb(v.verb) << '\n';
}