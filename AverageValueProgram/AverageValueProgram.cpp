// ==========================================================================================
// AverageValueProgram.cpp: Defines the entry point for the console application 
//
// Computer Scientist: Joshua Buker
// Program Name: AverageValueProgram
// Version: 1.0.0
// Date: 27 September 2022
//
// Inputs: Takes user input for 5 different integer values
// Outputs: The average of the values taken from input
// Algorithm: Simple sequencial algorithm to output a value
// =========================================================

#include <iostream>

// ==================

int main() {
    //Declare Varibles
    double num1;
    double num2;
    double num3;
    double num4;
    double num5;
    double average;

    //Intro
    std::cout << "=============================================================\n";
    std::cout << " Welcome To The Average Value of Five Numbers Program 9000\n";
    std::cout << "=============================================================\n" << std::endl;

    //Number 1
    std::cout << "Please Enter Your First Number: ";
    std::cin >> num1;

    //Number 2
    std::cout << "\nEnter Your Second Number: ";
    std::cin >> num2;

    //Number 3
    std::cout << "\nEnter Your Third Number: ";
    std::cin >> num3;

    //Number 4
    std::cout << "\nEnter Your Fourth Number: ";
    std::cin >> num4;

    //Number 5
    std::cout << "\nEnter Your Fifth Number: ";
    std::cin >> num5;

    //Calculations
    average = (num1 + num2 + num3 + num4 + num5) / 5;

    //Final Output
    std::cout << "\n" << average << " is your average value." << std::endl;
    std::cout << "=======================================";


} //Function main()

// ===================================================================