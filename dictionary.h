// Project #3: Word Search Part A
// 
// Group Members: Lisa Byrne, Kaite O'Flaherty, Alek Tunik
//
// Description: Header file for the dictionary class
// Assumption: 

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector> 

using namespace std;

class dictionary
// Read words from dictionary file and store in vector
{
    public:
    void readDict();
    friend ostream& operator<<(ostream& ostr, const words& words); // I think?
    void sortWords();
    bool lookupWords(string target);

    private:
    vector<string> words;

}; // End dictionary class

void dictionary::readDict()
// Read words from dictionary file
{
    // Read file and add words line by line to 'words' vector
    ifstream infile;
    infile.open(" .txt"); // Put path of file in quotes
    while (getline (infile, temp) 
    {
        string temp; 
        getline (infile, temp); 
        words.push_back(temp); // Add to end of vector
    }

} // End readDict

ostream& operator<<(ostream& ostr, const words& words)
// Print word list
{
    int count = 0;
    for (int i = 0; i < words.size(); i++ )
    {
        ostr << words[i] << endl;
        count++;
    }
    return ostr;
}

void dictionary::sortWords()
// Sort words using selection sort
{

}

bool dictionary::lookupWords(string target) // Basically just looked at her example in the slides for this
// Lookup words using binary search
// If found, return true and print word
// Return false otherwise
{
    int first = 0;
    int last = words.size()-1;

    while first <= last
    {
        int mid = (first+last)/2;
        string midVal = words[mid];

        if (target == midVal)
        // Check if target word is found
        {
            cout << "Houston, we've got eyes on the target: " << midVal << endl;
        }
        return true;
        else if (target < midVal)
        {
            first = mid - 1;
            last = mid + 1;
        }
    return false;
    } // End while
} // End lookupWords