#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>
#include "conjugationselection.hpp"

int main() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout << std::setw(50);
    SetConsoleTextAttribute(h, 10);
    std::cout << "LATIN CONJUGATION\n";
    std::cout << '\n' << '\n';
    SetConsoleTextAttribute(h, 11);
    std::cout << "Press any button to continue\n";
    if(getch()) {
        Beep(500, 400);
        selectConjugation();
    }
    SetConsoleTextAttribute(h, 7);
    return 0;
}