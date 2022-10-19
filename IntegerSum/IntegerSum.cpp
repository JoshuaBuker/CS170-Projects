// ==========================================================================================
// OddOrEven.cpp: Defines the entry point for the console application 
//
// Computer Scientist: Joshua Buker
// Program Name: IntegerSum
// Version: 1.0.0
// Date: 18 October 2022
//
// Inputs: Takes user input to determine how many values will be collected, then collects that number of user inputted values
// Outputs: The sum of an indefinite amount of integer values
// Algorithm: A continuous loop of sequential commands
// =========================================================


#include <iostream>
#include <vector>
#include <numeric>

// =================================================
int main()
{
 //Declare Variables
    int sum;
    bool restart = true;
    std::string yesOrNo;
    int values;
    std::vector<int> toBeSummed;
    
    while (restart) {
      //Get number of integers to be summed and creates the corresponding array 
        std::cout << "How many integer values would you like to sum? ";
        std::cin >> values;
        toBeSummed.resize(values);
        std::cout << "\n";

      //Get user inputted integer values
        for (int i = 0; i <= values - 1; i++) {
            std::cout << "Enter an integer value: ";
            std::cin >> toBeSummed[i];
        }

      //Sum up the given integers
        sum = std::accumulate(toBeSummed.begin(), toBeSummed.end(), 0);

      //Output results
        std::cout << "\nThe sum is " << sum << "\n";

      //Determine whether to loop or exit

        std::cout << "\nWould you like to go again (y/n)? ";
        std::cin >> yesOrNo;

        if (yesOrNo == "y") {
            restart = true;
            std::cout << "\n";
        }
        else {
            restart = false;
            std::cout << "\nBye..." << std::endl;
        }


    }

    


} // Function main();
// =====================================================================================================
