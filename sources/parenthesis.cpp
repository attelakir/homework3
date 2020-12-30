// Created by attelakir on 29.12.2020.
#include "../include/header.h"

float parenthesis() {
    char c = std::cin.get();
    if (c == '(') {
        float x = expr();
        std::cin.get();
        return x;
    } else {
        std::cin.putback(c);
        return number();
    }
}
