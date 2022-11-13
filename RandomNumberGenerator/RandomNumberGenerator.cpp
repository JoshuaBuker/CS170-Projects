// ==========================================================================================
// RandomNumberGenerator.cpp: Defines the entry point for the console application 
//
// Computer Scientist: Joshua Buker
// Program Name: RandomNumberGenerator
// Version: 1.0.0
// Date: 12 November 2022
//
// Inputs: No Input
// Outputs: An array of randomly generated integer values along with its sum
// Algorithm: A series of sequential commands
// ============================================================================

#include <iostream>
#include <random>
#include <numeric>
#include <algorithm>

//========== Main Function ==============================
int main() {

    //Declare Variables / Arrays
    int MIN_VALUE = 0, MAX_VALUE = 100, ARRAY_SIZE = 20, sum = 0;
    int* arr = new int[ARRAY_SIZE];
    bool restart = true;
    char temp;
    
    //Setting up randomizer 
    std::random_device rd;
    std::uniform_int_distribution<int> dist(MIN_VALUE, MAX_VALUE);

    do {
        //Populating array with random values
        for (int i = 0; i <= (ARRAY_SIZE - 1); i++)
        {
            arr[i] = dist(rd);
        }

        //Getting the sum of random numbers
        sum = std::accumulate(arr, arr + ARRAY_SIZE, sum);

        //Outputting random numbers and sum of values
        std::cout << "============== Randomly Generator Numbers ==============\n" << std::endl;
        for (int i = 0; i <= (ARRAY_SIZE - 1); i++)
        {
            std::cout << arr[i] << ", ";
        }

        std::cout << "\n\nThe Sum of these numbers is " << sum << "\n\n" << std::endl;

        //Determine if user wishes to go again
        std::cout << "Would you like to go again(y/n)? ";
        std::cin >> temp;

        if (temp != 'y')
        {
            restart = false;
        }
        else 
        {
            std::cout << "\n\n";
        }
    } while (restart);
    
} //Function main()
//====================================================