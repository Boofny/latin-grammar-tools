#include <iostream>
#include "conjugation.h"

void declination() {
    std::cout << "Work in progress, sorry!\n";
}

void conjugation() {
    std::cout << "Select what conjugation you want to use:\n";
}

void imperative() {
    std::cout << "Work in progress, sorry!\n";
}

int main() {
    int selection;
    std::cout << "Welcome to Latin Grammar Tools!\nSelect what you need: (numbers 1 - 3)\n\n";
    std::cout << "1. Declination\n";
    std::cout << "2. Conjugation\n";
    std::cout << "3. Imperative Form\n";
    std::cin >> selection;

    switch (selection) {
        case 1:
            declination();
            break;
        case 2:
            conjugation();
            break;
        case 3:
            imperative();
            break;
    }
    return 0;
}