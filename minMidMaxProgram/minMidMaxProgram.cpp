// ==========================================================================================
// minMidMaxProgram.cpp: Defines the entry point for the console application 
//
// Computer Scientist: Joshua Buker
// Program Name: minMidMaxProgram
// Version: 1.0.0
// Date: 11 November 2022
//
// Inputs: Collects three integer values from the user
// Outputs: The minimum, the middle, and the maximum of those 3 values.
// Algorithm: User loop that executes sequential commands utilizing functions
// ============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

//Declare global variables
int num1, num2, num3;

//===== Define Functions ====================================================================

//Collects 3 integer values from user and stores them in their respective global variable
int GetInteger() {

    std::cout << "\nEnter three integer values please ==> ";
    std::cin >> num1 >> num2 >> num3;

    return 0;
}

//Returns the larger of 2 integer values
int Max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

//Returns the smaller of 2 integer values
int Min(int a, int b) {
    if (a < b) 
    {
        return a;
    }
    else 
    {
        return b;
    }
}

//Returns the largest of 3 integer values
int Max(int a, int b, int c) {
    if (a > b && a > c) 
    {
        return a;
    }
    else if (b > a && b > c) 
    {
        return b;
    }
    else
    {
        return c;
    }
}

//Returns the sum of 3 integers
int Sum(int a, int b, int c) {
    return a + b + c;
}

//Returns the smallest of 3 integer values
int Min(int a, int b, int c) {
    if (a < b && a < c) 
    {
        return a;
    }
    else if (b < a && b < c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

//Returns the middle value of 3 integer values
int Middle(int a, int b, int c) {
    return ((a + b + c) - (Max(a, b, c)) - (Min(a, b, c)));
}
//==============================================================

//====== Main Function =========================================
int main() {

    bool restart = true;
    std::string temp;
    
    std::cout << "Enter three integer values, and I (the computer) will output the minimum, the middle, and the maximum of the three values. I will also output the sum of the three values.\n";

    while (restart) {
        GetInteger();

        std::cout << "\nThe minimum value is " << Min(num1, num2, num3) << "\n";
        std::cout << "The maximum value is " << Max(num1, num2, num3) << "\n";
        std::cout << "The middle value is " << Middle(num1, num2, num3) << "\n";
        std::cout << "The sum of values is " << Sum(num1, num2, num3) << std::endl;

        std::cout << "\nWould you like to go again (y/n)? ";

        std::cin >> temp;

        if (temp != "y")
        {
            restart = false;
        }
    }
    
} //Function main()
//======================================================================================