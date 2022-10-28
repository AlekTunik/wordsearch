// Project #3: Word Search Part A
// 
// Group Members: Lisa Byrne, Kaite O'Flaherty, Alek Tunik
//
// Description: Main file for word search project
// Assumption: 

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector> 
#include "dictionary.h"
#include "grid.h"
#include "d_matrix.h"
#include "d_except.h"

using namespace std;



vector<string> findMatches(dictionary dict, grid myGrid)
// Function to print out candidate words that can be found in the dictionary.
{
    // Initialize variables
    string word;
    vector <string> found;

    //scan grid to find all possible words
    for (int i = 0; i < myGrid.getRows(); i ++)
    // iterate thru rows
    {
        for (int j = 0; j < myGrid.getCols(); j ++)
        // iterate thru cols
        {
            for (int d = 0; d < 8; d ++)
            //iterate thru each of the 8 directions
            {
                // reinitialize word for every iteration
                word = "";

                //
            }

        }
    }

    //print out candidate words

    return found;
} // end findMatches

int search()
// Function to read the name of the grid file from the keyboard, read the data 
//from input files for grid and dictionary, and print out candidate words that 
//can be found in the dictionary.
{

} // end search

int main()
{
    //
} // end main

