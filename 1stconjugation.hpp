#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>

class LatinVerb {
    public:
        std::string returnTenseVerb(std::string latinVerb);
        std::string getBaseVerb(std::string latinVerb);
};

std::string LatinVerb::returnTenseVerb(std::string latinVerb) {
    std::string getBaseOfVerb = latinVerb.erase(latinVerb.length() - 3);
    return getBaseOfVerb.append("o");
}

std::string LatinVerb::getBaseVerb(std::string latinVerb) {
    return latinVerb.erase(latinVerb.length() - 3);
}

void conjugate1st() {
    system("CLS");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 12);
    std::cout << "You chose the 1st conjugation!\n";
    Sleep(1000);
    system("CLS");

    std::cin.ignore();

    LatinVerb v;

    std::string verb;
    std::cout << "Enter in a verb in Latin!\n";
    std::getline(std::cin, verb);
    
    std::cout << '\n';

    std::cout << "Output:\n";
    std::cout << v.returnTenseVerb(verb) << ", 1\n\n";
    SetConsoleTextAttribute(h, 8);
    std::cout << "1. " << v.returnTenseVerb(verb) << '\n';
    std::cout << "2. " << v.getBaseVerb(verb) << '\n';
}