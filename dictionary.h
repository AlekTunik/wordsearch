// Project #3: Word Search Part A
// 
// Group Members: Lisa Byrne, Kaite O'Flaherty, Alek Tunik
//
// Description: Header file for the dictionary class
// Assumption: 

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector> 
#include "d_except.h"
#include "d_matrix.h"

using namespace std;

class dictionary
// Read words from dictionary file and store in vector
// Print list of words from dictionary
// Sort words in alphabetical order
// Look up word in the dictionary to see if it exists
{
    public:
    void readDict();
    friend ostream& operator<<(ostream& ostr, const dictionary dict); // I think?
    void sortWords();
    bool lookupWords(string target);

    private:
    vector<string> _words;

}; // End dictionary class

void dictionary::readDict()
// Read words from dictionary file
{
    // Read file and add words line by line to 'words' vector
    string temp;
    ifstream infile;
    infile.open("Dictionary"); // Put path of file in quotes
    if(!infile)
    {
        cerr << "Couldn't open file, check path" << endl;
    }
    while (getline (infile, temp))
    {
        getline (infile, temp);
        _words.push_back(temp);
    }
} // End readDict

ostream& operator<<(ostream& ostr, const dictionary dict)
// Overloaded cout operator to print word list
{
    int count = 0;
    for (int i = 0; i < dict._words.size(); i++ )
    {
        ostr << dict._words[i] << endl;
        count++;
    }
    return ostr;
} // End overloaded cout operator

void dictionary::sortWords() // Looked at her example in the slides for this
// Sort words using selection sort
{
    for (int i = 0; i < _words.size()-1; i++)
    {
        int min = i;
        for (int j = i+1; j < _words.size(); j++)
        {
            if (_words[j] < _words[min])
            {
                min = j;
            }
        }
        swap(_words[i], _words[min]);
    } //End for
} // End sortWords

bool dictionary::lookupWords(string target) // Looked at her example in the slides for this
// Lookup words using binary search
// If found, return true and print word
// Return false otherwise
{
    int first = 0;
    int last = _words.size()-1;
    while (first <= last)
    {
        int mid = first + (last-first)/2;
        string midVal = _words[mid];

        if (target == _words[mid])
        // Check if target word is found
        {
            cout << "Houston, we've got eyes on the target: " << _words[mid] << endl;
            return true;
        }
        else if (target > _words[mid])
        {
            first = mid + 1;
        }
        else
        {
            first = mid - 1;
        }
    } // End while
    return false;
} // End lookupWords