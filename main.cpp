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

                //iterate thru string length
                //I used get rows bc the longest it can be is the # of rows?? could be wrong
                for (int l = 0; l < myGrid.getRows(); l++)
                {
                    
                }
            }

        }
    }

    //print out candidate words

    return found;
} // end findMatches

int search()
// (1) Read the name of the grid file from the keyboard
// (2) Read the data from input files for grid and dictionary
// (3) Print out candidate words that can be found in the dictionary.
{
    // (1)
    string fileName;
    cout << "Please enter the name of the file to serve as the grid: ";
    cin >> fileName;

    // (2)
    // Create grid object
    // Convert specified file to matrix
    grid grid;                                        //Do the classes need constructors to do this?
    grid.readGrid(fileName);

    // Create words object and read in dictionary
    dictionary words;                                 //Do the classes need constructors to do this?
    words.readDict();

    // (3)

} // end search

int main()
{
    //call search
    //search();

    dictionary newdict;
    newdict.readDict();
    newdict.sortWords();
    cout << newdict;
    newdict.lookupWords("wine");

} // end main

