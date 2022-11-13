// ==========================================================================================
// CircumferenceAndAreaCalculator.cpp: Defines the entry point for the console application 
//
// Computer Scientist: Joshua Buker
// Program Name: CircumferenceAndAreaCalcuator
// Version: 1.0.0
// Date: 12 November 2022
//
// Inputs: Collects a character from user
// Outputs: The total number of vowels the user inputted
// Algorithm: User loop that executes sequential commands
// ============================================================================

#define _USE_MATH_DEFINES

#include <math.h>
#include <iostream>


//======= Declare Global Variables ======================

double radius;
double area;


//======== Declare Additional Functions =======================

//Welcomes the user
void Banner() {

    std::cout << "=================== Welcome ====================" << std::endl;
    std::cout << "Circumference and Area Calculator v1.0 Initializing...\n" << std::endl;
    std::cout << "=============== Loading Complete ================" << std::endl;

}

//Collect radius value from user
void GetValue(double& a) {

    std::cout << "\nPlease enter your desired radius. ";
    std::cin >> a;
    std::cout << "\n" << std::endl;

}

//Calculates circumference of circle based on a radius
double ComputeCircumference(double a) {

    return 2 * M_PI * a;

}

//Calculates area of circle
void ComputeArea(double a, double& b) {

    b = M_PI * pow(a, 2);

}

//Determines whether or not to restart
bool GoAgain() {

    char temp;

    std::cout << "\nWould you like to go again (y/n)?  ";
    std::cin >> temp;

    if (temp == 'y') 
    {
        return true;
    }
    else
    {
        return false;
    }
    

}

//Outputs circumference and area to terminal
void OutputData(double a, double b, double c) {

    std::cout << "With a radius of " << a << "..." << std::endl;
    std::cout << "The circumference of the circle would be " << b << std::endl;
    std::cout << "And the area would be " << c << ". " << std::endl;

}


//======== Main Function =============================
int main() {

    //Declare Variables
    double circumference;

    //Play Intro
    Banner();

    //User Loop
    do {

        GetValue(radius);

        circumference = ComputeCircumference(radius);
        ComputeArea(radius, area);

        OutputData(radius, circumference, area);


    } while (GoAgain());



} //Function main()
//===================================================




















