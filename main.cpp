#include <iostream>
#include <conio.h>
#include "conjugation.h"
#include "declination.h"
#include "imperative.h"

void declination() {
    system("CLS");
    int selection;
    std::cout << "Select what declination you want to use: (numbers 1-5)\n\n";
    std::cout << "1st\n";
    std::cout << "2nd\n";
    std::cout << "3rd\n";
    std::cout << "4th\n";
    std::cout << "5th\n";
    std::cin >> selection;

    switch (selection) {
        case 1:
            declinate1st();
            break;
        case 2:
            declinate2nd();
            break;
    }
}

void conjugation() {
    system("CLS");
    int selection;
    std::cout << "Select what conjugation you want to use: (numbers 1-4)\n\n";
    std::cout << "1st\n";
    std::cout << "2nd\n";
    std::cout << "3rd\n";
    std::cout << "4th\n";
    std::cin >> selection;

    switch (selection) {
        case 1:
            conjugate1st();
            break;
        case 2:
            conjugate2nd();
            break;
        case 3:
            conjugate3rd();
            break;
    }
}

void imperative() {
    imperativeform();
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