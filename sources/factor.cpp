// Created by attelakir on 29.12.2020.
#include "../include/header.h"

float factor() {
    float x = parenthesis();
    float m;
    for (;;) {
        char c = std::cin.get();
        switch (c) {
            case '*':
                x *= parenthesis();
                break;
            case '/':
                m = parenthesis();
                if (m == 0) {
                    std::cout << "You cannot divide by zero" << std::endl;
                    return 0;
                } else x /= m;
                break;
            default:
                std::cin.putback(c);
                return x;
        }
    }
}
