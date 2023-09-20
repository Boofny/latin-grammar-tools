#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>

class LatinVerb {
    public:
        std::string returnTenseVerb(std::string verb);
};

std::string LatinVerb::returnTenseVerb(std::string verb) {
    return verb;
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
    std::cout << v.returnTenseVerb(verb);
}