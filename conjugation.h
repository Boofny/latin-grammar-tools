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
    std::cin.ignore();
    std::getline(std::cin, v.verb);

    std::cout << '\n';

    std::cout << "1. " << v.getTenseVerb(v.verb) << '\n';
    std::cout << "2. " << v.getBaseVerb(v.verb).append("s") << '\n';
    std::cout << "3. " << v.getBaseVerb(v.verb).append("t") << '\n';
    
    std::cout << '\n';

    std::cout << "1. " << v.getBaseVerb(v.verb).append("mus") << '\n';
    std::cout << "2. " << v.getBaseVerb(v.verb).append("tis") << '\n';
    std::cout << "3. " << v.getBaseVerb(v.verb).append("nt") << '\n';
}

void conjugate2nd() {
    LatinVerb v;

    std::cout << "Enter in a verb in Latin:\n";
    std::cin.ignore();
    std::getline(std::cin, v.verb);

    std::cout << '\n';

    std::cout << "1. " << v.getBaseVerb(v.verb).append("o") << '\n';
    std::cout << "2. " << v.getBaseVerb(v.verb).append("s") << '\n';
    std::cout << "3. " << v.getBaseVerb(v.verb).append("t") << '\n';

    std::cout << '\n';

    std::cout << "1. " << v.getBaseVerb(v.verb).append("mus") << '\n';
    std::cout << "2. " << v.getBaseVerb(v.verb).append("tis") << '\n';
    std::cout << "3. " << v.getBaseVerb(v.verb).append("nt") << '\n';
}