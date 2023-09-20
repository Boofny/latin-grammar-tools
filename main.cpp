#include <iostream>
#include <conio.h>
#include <windows.h>

int main() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 10);
    std::cout << "LATIN CONJUGATION\n";
    std::cout << '\n\n';
    std::cout << "Press any button to continue\n";
    if(getch()) {
        Beep(500, 400);
    }
    SetConsoleTextAttribute(h, 7);
    return 0;
}