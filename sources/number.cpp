// Created by attelakir on 29.12.2020.
#include "../include/header.h"

float number() {
    double integral = 0, fractional = 0;
    char ch;
    while (isdigit(ch = std::cin.get())) integral *= 10, integral += ch - '0';
    if (ch == '.') while (isdigit(ch = std::cin.get())) fractional += ch - '0', fractional /= 10;
    std::cin.putback(ch);
    return static_cast<float>(integral + fractional);
}
