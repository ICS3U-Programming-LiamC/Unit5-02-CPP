// Copyright (c) 2021 Liam Csiffary All rights reserved.
//
// Created by: Liam Csiffary
// Date: May June 2, 2021
// This program calcualates the area of a triangle, using functions

#include <iostream>
#include <cmath>

// variables
float base;
float height;
float area;

// create function that does the math
void CalcArea(float base, float height) {
    area = base * height / 2;
    // print results to the screen
    std::cout << "\nThe area of your triangle is " << area << "units^2";
}

// make the main function
int main() {
    // tell the user what the program does
    std::cout << "This program calculates the area of a triangle\n";
    // make the string version of the var
    std::string baseStr;
    std::string heightStr;

    // get the number from the user
    std::cout << "What is the length of the triangle: ";
    std::cin >> baseStr;
    std::cout << "What is the height of the triangle: ";
    std::cin >> heightStr;


    try {
        // try to turn it into a integer
        base = std::stof(baseStr);
        height = std::stof(heightStr);

        // make sure that their numbers are positive
        if (base > 0 && height > 0) {
            CalcArea(base, height);
        } else {
            // if they aren't
            std::cout << "Inputs must be positive";
            main();
        }


    // if could not turn into integer
    } catch (std::invalid_argument) {
        std::cout << "This is not a valid number";
        main();
    }
}
