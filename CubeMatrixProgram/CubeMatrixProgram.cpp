//===================================================================================
// CubeMatrixProgram.cpp: Defines the entry point for the console application 
//
// Computer Scientist: Joshua Buker
// Program Name: CubeMatrixProgram
// Version: 1.0.0
// Date: 27 November 2022
//
// Inputs: Takes two integer input from the user. One for an integer, other for a user loop
// Outputs: A matrix of the cubed value of the inputted integer, with the dimensions of the input integer.
// Algorithm: Simple sequential algorithm to output a value with a user loop and functions
// ========================================================================================

#include <iostream>
#include <cmath>

//======================== Declare Functions =============================

//Intro
void intro() {

    std::cout << "=============================================\n";
    std::cout << "  Welcome to CubeMatrixProgram Version 1.0.0\n";
    std::cout << "=============================================\n\n";
    
}

//Cubes the inputted number
int Cube(int a) {

    return std::pow(a, 3);
}

//Gets User input
int getInteger() {

    std::cout << "Please enter your desired integer value: ";

    int temp;
    std::cout << "n = ";
    std::cin >> temp;
    std::cout << "\n" << std::endl;
    return temp;
}

//Creates Grid
void gridMaker(int val) {

    int valCubed = Cube(val);

    for (int j = 0; j < val; j++) {

        for (int i = 0; i < val; i++) {

            std::cout << valCubed << " ";

        }

        std::cout << "\n" << std::endl;
    }
}

//User Loop Function
bool GoAgain() {

    char temp;

    std::cout << "\n================================\n";
    std::cout << "Would you like to go again y/n? ";
    std::cin >> temp;
    std::cout << "================================\n\n";

    if (temp != 'y') 
    {
        return false;
    }
    else {
        return true;
    }
}

//======================== Main Function =============================
int main() {

    intro();

    do {

        gridMaker(getInteger());

    } while (GoAgain());
    

} //Function main()
//==================================================================