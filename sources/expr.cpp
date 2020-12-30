// Created by attelakir on 29.12.2020.
#include "../include/header.h"

float expr() {
    float x = factor();
    for (;;) {
        char c = std::cin.get();
        switch (c) {
            case '+':
                x += factor();
                break;
            case '-':
                x -= factor();
                break;
            default:
                std::cin.putback(c);
                return x;
        }
    }
}
