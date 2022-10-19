// ==========================================================================================
// OddOrEven.cpp: Defines the entry point for the console application 
//
// Computer Scientist: Joshua Buker
// Program Name: OddOrEven
// Version: 1.0.0
// Date: 18 October 2022
//
// Inputs: Takes user input for an integer value
// Outputs: Tells whether or not the value is odd or even and positive or negative
// Algorithm: A series of sequential conditons. 
// =========================================================


#include <iostream>

// =================================================
int main()
{
 //Declare Variables
    int value;
    std::string positiveOrNegative;
    std::string evenOrOdd;


 //Intro 
    std::cout << "Enter an integer value and I will determine if it is negative, zero or positive. \n";
    std::cout << "I will also determine if the value is even or odd.\n" << std::endl;

//Get User Input
    std::cout << "Enter the integer value ==> ";
    std::cin >> value;

//Evaluate the value
   // Even or Odd
    if (value % 2 == 0) {
        evenOrOdd = "Even";
    }
    else {
        evenOrOdd = "Odd";
    }

   // Positive or Negative
    if (value == 0) {
        positiveOrNegative = "Zero";
    } 
    else if (value > 0) {
        positiveOrNegative = "Positive";
    }
    else {
        positiveOrNegative = "Negative";
    }
    
//Display results
    std::cout << "\n";
    std::cout << "The value " << value << " is " << positiveOrNegative << ".\n";
    std::cout << "The value " << value << " is " << evenOrOdd << ".\n" << std::endl; 
    std::cout << "Press any key to continue...";

    
} // Function main();
// =====================================================================================================
