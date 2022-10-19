// ==========================================================================================
// MidtermAreaCalculator.cpp: Defines the entry point for the console application 
//
// Computer Scientist: Joshua Buker
// Program Name: MidtermAreaCalculator
// Version: 1.0.0
// Date: 18 October 2022
//
// Inputs: Takes 2 integer inputs from the user. One for length, other for radius
// Outputs: The area for the user's square and circle and determines which is larger.
// Algorithm: Simple sequential algorithm to output a value with a user loop
// =========================================================

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

//===================================================================
int main() {
  //Declare variables
	double edgeLength;
	double radius;
	double areaSquare;
	double areaCircle;
	std::string yesOrNo;
	bool restart = true;

  //User Loop
	while (restart) {
	  //Get user input
		std::cout << "Enter the edge length for a square ==> ";
		std::cin >> edgeLength;
		std::cout << "Enter the radius for a circle ==> ";
		std::cin >> radius;

	  //Calcuate area and output results
		areaSquare = pow(edgeLength, 2);
		areaCircle = (M_PI * pow(radius, 2));

		std::cout << "\nThe area of the square is " << areaSquare << " square units\n";
		std::cout << "The area of the circle is " << areaCircle << " square units\n" << std::endl;

	  //Determine which is larger
		if (areaSquare > areaCircle) 
		{
			std::cout << "The area of the square is greater than the area of the circle.\n";
		} 
		else 
		{
			std::cout << "The area of the circle is greater than the area of the square.\n";
		}
	  
	  //Ask user if they with to go again
		std::cout << "\nWould you like to go again (y/n)? ";
		std::cin >> yesOrNo;

		if (yesOrNo == "y")
		{
			std::cout << "\n";
			restart = true;
		}
		else 
		{
			restart = false;
			std::cout << "\nProgram Execution Terminating...";
		}
	}
} //Function main()
//=======================================================================