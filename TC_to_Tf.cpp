// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Dec 2020
// This program for TC to Tf

#include <iostream>

void Fahrenheit() {
    // This funtion is for TC to Tf

    int Tf;
    std::string TC;
    int TC_int;

    // input

    std::cout << "Enter the Celsius degree (integer): ";
    std::cin >> TC;

    // process & output
    try {
        TC_int = std::stoi(TC);;
        Tf = (9.0/5.0) * TC_int + 32;
        std::cout << TC_int << "°C = " << Tf << "°F";
    } catch (std::invalid_argument) {
        std::cout << "It is not a integer";
    }
}

int main() {
    // this function just calls other functions

    // call functions
    Fahrenheit();
}
