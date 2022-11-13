// ==========================================================================================
// FractionCalculator.cpp: Defines the entry point for the console application 
//
// Computer Scientist: Joshua Buker
// Program Name: FractionCalcuator
// Version: 1.0.0
// Date: 12 November 2022
//
// Inputs: Gets two fractions from the user and what math operation to perform
// Outputs: The results of the corresponding math equation
// Algorithm: User loop that executes sequential commands
// ============================================================================


#include <iostream>

//============ Main Function ============================
int main() {

    //Declare variables
    double num1, num2, den1, den2;
    int	operationChoice;
    bool restart = true;

    //Intro
    std::cout << "=================== Welcome ====================" << std::endl;
    std::cout << "FractionCalculator v1.0 Initializing...\n" << std::endl;
    std::cout << "=============== Loading Complete ================\n\n" << std::endl;


    //User Loop
    do {

        //User Input

        //Main menu
        std::cout << "==============================\n";
        std::cout << "1 : Add          2 : Subtract\n3 : Multiply     4 : Divide \n5 : Quit";
        std::cout << "\n==========================================================\n";
        std::cout << "Enter the number corresponding to the option you wish for: ";
        std::cin >> operationChoice;


        if (operationChoice == 5) {

            restart = false;
            break;

        }

        //Get First Fraction
        std::cout << "\n\nFirst Fraction\n";
        std::cout << "===============\n";
        std::cout << "Numerator: ";
        std::cin >> num1;
        std::cout << "Denominator: ";
        std::cin >> den1;

        //Get Second Fraction
        std::cout << "\n\nSecond Fraction\n";
        std::cout << "===============\n";
        std::cout << "Numerator: ";
        std::cin >> num2;
        std::cout << "Denominator: ";
        std::cin >> den2;




        //Calculate and Display to terminal

        std::cout << "\n\nOutput\n";
        std::cout << "======\n";

        switch (operationChoice) {

        case 1:

            std::cout << (num1 / den1) + (num2 / den2);
            std::cout << "\n" << std::endl;
            break;

        case 2:

            std::cout << (num1 / den1) - (num2 / den2);
            std::cout << "\n" << std::endl;
            break;

        case 3:

            std::cout << (num1 / den1) * (num2 / den2);
            std::cout << "\n" << std::endl;
            break;

        case 4:

            std::cout << (num1 / den1) / (num2 / den2);
            std::cout << "\n" << std::endl;
            break;


        }

    } while (restart);
}