// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Sep 2022
// This program adds two numbers

#include <iomanip>
#include <iostream>

int main() {
    // this function adds two numbers
    int integerOne;
    int integerTwo;
    int answer;

    // input
    std::cout << "This program adds two numbers." << std::endl;
    std::cout << "Enter a number: ";
    std::cin >> integerOne;
    std::cout << "Enter another number: ";
    std::cin >> integerTwo;

    // process
    answer = integerOne + integerTwo;

    // output
    std::cout << "" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << std::setfill('0')
              << integerOne << " + "
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << integerTwo << " = "
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << answer << std::endl;
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
