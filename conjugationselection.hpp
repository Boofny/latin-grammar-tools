#include <iostream>
#include <windows.h>
#include <conio.h>
#include "1stconjugation.hpp"

void selectConjugation() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    system("CLS");

    int selectConjugation;
    SetConsoleTextAttribute(h, 11);
    std::cout << "Select what conjugation you want to use!\n\n";
    std::cout << "1. Conjugation\n";
    std::cout << "2. Conjugation\n";
    std::cout << "3. Conjugation\n";
    std::cout << "4. Conjugation\n";
    again:std::cin >> selectConjugation;

    switch(selectConjugation) {
        case 1:
            conjugate1st();
            break;
        case 2:
            std::cout << "Work in progress, sorry!\n";
            break;
        case 3:
            std::cout << "Work in progress, sorry!\n";
            break;
        case 4:
            std::cout << "Work in progress, sorry!\n";
            break;
        default:
            std::cout << "You must use the numbers 1-4!\nTry again: ";
            goto again;
    }
}