#pragma once

#include <iostream>
#include <string>
#include <conio.h>

class LatinNoun {
    public:
        std::string noun;
        std::string getBaseNoun1st(std::string noun);
        std::string getBaseNoun2nd(std::string noun);
};

std::string LatinNoun::getBaseNoun1st(std::string noun) {
    return noun.erase(noun.length() - 1);
}

std::string LatinNoun::getBaseNoun2nd(std::string noun) {
    return noun.erase(noun.length() - 2);
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

void declinate2nd() {
    system("CLS");
    LatinNoun n;

    const std::string masculinum1 = "us";
    const std::string masculinum2 = "er";
    const std::string neutrum = "um";

    std::cout << "Enter in a noun in Latin:\n";
    std::cin.ignore();
    std::getline(std::cin, n.noun);

    std::cout << '\n';

    if (n.noun.substr(n.noun.length() - masculinum1.length()) == masculinum1) {
        std::cout << "Singularis:\n";
        std::cout << "N   " << n.getBaseNoun2nd(n.noun).append("us") << '\n';
        std::cout << "G   " << n.getBaseNoun2nd(n.noun).append("i") << '\n';
        std::cout << "D   " << n.getBaseNoun2nd(n.noun).append("o") << '\n';
        std::cout << "Acc " << n.getBaseNoun2nd(n.noun).append("um") << '\n';
        std::cout << "V   " << n.getBaseNoun2nd(n.noun).append("e") << '\n';
        std::cout << "Abl " << n.getBaseNoun2nd(n.noun).append("o") << '\n';

        std::cout << '\n';

        std::cout << "Pluralis:\n";
        std::cout << "N   " << n.getBaseNoun2nd(n.noun).append("i") << '\n';
        std::cout << "G   " << n.getBaseNoun2nd(n.noun).append("orum") << '\n';
        std::cout << "D   " << n.getBaseNoun2nd(n.noun).append("is") << '\n';
        std::cout << "Acc " << n.getBaseNoun2nd(n.noun).append("os") << '\n';
        std::cout << "V   " << n.getBaseNoun2nd(n.noun).append("i") << '\n';
        std::cout << "Abl " << n.getBaseNoun2nd(n.noun).append("is") << '\n';
    }

    if (n.noun.substr(n.noun.length() - masculinum2.length()) == masculinum2) {
        std::cout << "Singularis:\n";
        std::cout << "N   " << n.getBaseNoun2nd(n.noun).append("er") << '\n';
        std::cout << "G   " << n.getBaseNoun2nd(n.noun).append("ri") << '\n';
        std::cout << "D   " << n.getBaseNoun2nd(n.noun).append("ro") << '\n';
        std::cout << "Acc " << n.getBaseNoun2nd(n.noun).append("rum") << '\n';
        std::cout << "V   " << n.getBaseNoun2nd(n.noun).append("er") << '\n';
        std::cout << "Abl " << n.getBaseNoun2nd(n.noun).append("ro") << '\n';

        std::cout << '\n';

        std::cout << "Pluralis:\n";
        std::cout << "N   " << n.getBaseNoun2nd(n.noun).append("ri") << '\n';
        std::cout << "G   " << n.getBaseNoun2nd(n.noun).append("rorum") << '\n';
        std::cout << "D   " << n.getBaseNoun2nd(n.noun).append("ris") << '\n';
        std::cout << "Acc " << n.getBaseNoun2nd(n.noun).append("ros") << '\n';
        std::cout << "V   " << n.getBaseNoun2nd(n.noun).append("ri") << '\n';
        std::cout << "Abl " << n.getBaseNoun2nd(n.noun).append("ris") << '\n';
    }

    if (n.noun.substr(n.noun.length() - neutrum.length()) == neutrum) {
        std::cout << "Singularis:\n";
        std::cout << "N   " << n.getBaseNoun2nd(n.noun).append("um") << '\n';
        std::cout << "G   " << n.getBaseNoun2nd(n.noun).append("i") << '\n';
        std::cout << "D   " << n.getBaseNoun2nd(n.noun).append("o") << '\n';
        std::cout << "Acc " << n.getBaseNoun2nd(n.noun).append("um") << '\n';
        std::cout << "V   " << n.getBaseNoun2nd(n.noun).append("um") << '\n';
        std::cout << "Abl " << n.getBaseNoun2nd(n.noun).append("a") << '\n';

        std::cout << '\n';

        std::cout << "Pluralis:\n";
        std::cout << "N   " << n.getBaseNoun2nd(n.noun).append("a") << '\n';
        std::cout << "G   " << n.getBaseNoun2nd(n.noun).append("orum") << '\n';
        std::cout << "D   " << n.getBaseNoun2nd(n.noun).append("is") << '\n';
        std::cout << "Acc " << n.getBaseNoun2nd(n.noun).append("a") << '\n';
        std::cout << "V   " << n.getBaseNoun2nd(n.noun).append("a") << '\n';
        std::cout << "Abl " << n.getBaseNoun2nd(n.noun).append("is") << '\n';
    }
}