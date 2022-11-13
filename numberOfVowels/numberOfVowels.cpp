// ==========================================================================================
// numberOfVowels.cpp: Defines the entry point for the console application 
//
// Computer Scientist: Joshua Buker
// Program Name: numberOfVowels
// Version: 1.0.0
// Date: 11 November 2022
//
// Inputs: Collects a character from user
// Outputs: The total number of vowels the user inputted
// Algorithm: User loop that executes sequential commands
// ============================================================================

#include <iostream>
#include <vector>
#include <algorithm>

//==== Main Function ==========================================
int main() {

//Declare Variables
int vowelNum = 0;
bool restart = true;
char yesOrNo;
char temp;

//Populate Vowel Vector
std::vector <char> vowels{ 'a', 'e', 'i', 'o', 'u', 'y' };

//User Loop
while (restart) {
    
    std::cout << "\nEnter a letter. ";
    std::cin >> temp;

    //Determine if character is vowel. If so, +1 to vowelNum
    if (std::find(vowels.begin(), vowels.end(), temp) != vowels.end()) 
    {
        vowelNum++;
    }

    std::cout << "==================================\n";
    std::cout << "Would you like to enter another letter (y/n)? ";
    std::cin >> yesOrNo;

    //Determine if another letter will be inputted
    if (yesOrNo == 'y')
    {
        std::cout << std::endl;
    }
    else
    {
        std::cout << "\nThe number of vowels you entered is " << vowelNum << std::endl;
        std::cout << "\n=================================\n";
        std::cout << "Would you like to enter another\nsequence of letters (y/n)? ";
        std::cin >> yesOrNo;
        std::cout << "=================================\n";

        //Determine if another sequence of letters will be inputted
        if (yesOrNo == 'y')
        {
            vowelNum = 0;
        }
        else 
        {
            restart = false;
        }
    }
   
}

} //Function main()
//=====================================================================