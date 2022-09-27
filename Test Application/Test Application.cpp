// Test Application.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//Declare Varibles
	double num1;
	double num2;
	double num3;
	double num4;
	double num5;
	double averageValue;

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
	averageValue = (num1, num2, num3, num4, num5) / 5;

	//Final Output
	std::cout << "\n" << averageValue << " is your average value." << std::endl;
	std::cout << "=======================================";

} //Function main()

// =============================================================================
