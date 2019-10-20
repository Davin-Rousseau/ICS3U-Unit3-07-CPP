// Copyright (c) 2019 Davin Rousseau All rights reserved
//
// Created by: Davin Rousseau
// Created on October 2019
// This program asks user to input their age
// and tells them if they can date a granddaughter

#include <iostream>
#include <string>

int main() {
    // this function determines if a person can date a granddaughter
    std::string integer;
    int age;


    // input
    std::cout << "Enter your age: ";

    std::cin >> integer;

    std::cout << "" << std::endl;

    // process
    try {
        age = std::stoi(integer);

        if (age >= 25 && age <= 40) {
            std::cout << "You can date my granddaughter";

        } else {
            std::cout << "You can not date my granddaughter";
        }
        return 0;
    }
     catch (std::invalid_argument) {
        std::cout << "Invalid input.";
    }
}
