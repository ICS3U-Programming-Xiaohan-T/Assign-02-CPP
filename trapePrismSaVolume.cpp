// Copyright (c) 2025 Xiaohan All rights reserved.
//
// Created by: Xiaohan
// Date: Mar 5, 2025
// This program is created for the surface area and volume for trapezoidal prism

#include <iostream>
#include <iomanip>
#define CYAN "\033[36m" /* Cyan */
#define YELLOW "\033[33m" /* Yellow */
#define BLUE "\033[34m"   /* Blue */
int main() {
    float height, length, longBase, shortBase, leftSideLength, rightSideLength,
    surfaceArea, volume, frontBackArea;
    std::cout << YELLOW
              << "Hello, let me help you to find the volume and "
              << "surface area of a trapezoidal prism!" << std::endl;
    std::cout << BLUE << "Please enter the height (cm): ";
    std::cin >> height;
    std::cout << BLUE << "Enter the length (cm): ";
    std::cin >> length;
    std::cout << BLUE << "Enter the long base (cm): ";
    std::cin >> longBase;
    std::cout << BLUE << "Enter the short base (cm): ";
    std::cin >> shortBase;
    std::cout << BLUE << "Enter the left side length of the circle (cm): ";
    std::cin >> leftSideLength;
    std::cout << BLUE << "Enter the right side length (cm): ";
    std::cin >> rightSideLength;
    frontBackArea = (longBase + shortBase) * height;
    volume = 0.5 * (shortBase + longBase) * height * length;
    surfaceArea = frontBackArea + (shortBase * length) + (longBase * length)
    + (leftSideLength * length) + (rightSideLength * length);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << CYAN << "Surface Area: " << surfaceArea << " cm^2"
    << std::endl;
    std::cout << CYAN << "Volume: " << volume << " cm^3" << std::endl;
}
