// Created by attelakir on 29.12.2020.
#include "../include/header.h"

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    char v = '1';
    do {
        std::cout << "Enter the expression: " << std::endl;
        float res = expr();
        std::cout << "Result: " << res << std::endl;
        std::cout << "Do you want to continue? (1)" << std::endl;
        std::cin >> v;
        char v = std::cin.get();
    } while (v == '1');
}
