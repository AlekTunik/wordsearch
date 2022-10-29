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

string reverseWord(dictionary dict, string word)
// reverses word
{
    string reverseWord = word;
    int len = reverseWord.length();
    for (int n = 0; n < len/2; n++)
    {
        swap(reverseWord[n], reverseWord[len - n - 1]);
    }
    // check if reverse word is in dictionary
    return reverseWord;
}

vector<string> findMatches(dictionary dict, grid myGrid)
// Function to print out candidate words that can be found in the dictionary.
{
    // Initialize variables
    string word = "";
    string revWord;
    matrix<char> grid = myGrid.getGrid();
    vector <string> found;
    bool isFound = false;

    //scan grid to find all possible words
    for (int i = 0; i < myGrid.getRows(); i ++)
    // iterate thru rows
    {
        for (int j = 0; j < myGrid.getCols(); j ++)
        // iterate thru cols
        {
            // search vertically
            word = "";
            
            int rowI = j;
            while (rowI < myGrid.getCols())
            {
                // add letters to word
                word += grid[rowI][j];

                // reverse word
                string revWord = reverseWord(dict, word);

                // check if word is in dictionary
                if (dict.lookupWords(word))
                {
                    found.push_back(word);
                }
                else if (dict.lookupWords(revWord))
                {
                    found.push_back(revWord);
                }
                
                rowI++; // increment index
            } // end search vertically
            
            // search norizontally
            word = "";
            int colI = i;
            while(rowI < myGrid.getRows())
            {
                // add letters to word
                word += grid[i][colI];

                // reverse word
                string revWord = reverseWord(dict, word);

                // check if word is in dictionary
                if (dict.lookupWords(word))
                {
                    found.push_back(word);
                }
                else if (dict.lookupWords(revWord))
                {
                    found.push_back(revWord);
                }

                colI++; // increment column
            } // end search horizontally

            // search search vertical (neg x)
            word = "";
            rowI = j;
            colI = i;
            while(colI >= myGrid.getCols() && rowI >= myGrid.getRows())
            {
                word += grid[colI][rowI];

                // reverse word
                string revWord = reverseWord(dict, word);

                // check if word is in dictionary
                if (dict.lookupWords(word))
                {
                    found.push_back(word);
                }
                else if (dict.lookupWords(revWord))
                {
                    found.push_back(revWord);
                }

                // increment index
                rowI++;
                colI++;
            } // end search vertical (neg x)

            // search vertical (pos x)
            word = "";
            rowI = j;
            colI = i;
            while(colI >= 0 && rowI >= 0)
            {
                word += grid[colI][rowI];

                // reverse word
                string revWord = reverseWord(dict, word);

                // check if word is in dictionary
                if (dict.lookupWords(word))
                {
                    found.push_back(word);
                }
                else if (dict.lookupWords(revWord))
                {
                    found.push_back(revWord);
                }
                // decrement index
                rowI--;
                colI--;

            } // end search vertical (pos x)
        }
    }
    // return vector of found words
    return found;
} // end findMatches

void search()
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
    grid grid;                                       
    grid.readGrid(fileName);

    // Create words object and read in dictionary
    dictionary words;                                
    words.readDict();
    words.sortWords();

    // (3)
    vector<string> matches = findMatches(words, grid);
    cout << matches << endl;

} // end search

int main()
{
    search();
} // end main

