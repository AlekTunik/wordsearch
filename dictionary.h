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
    void lookupWords();

    private:
    vector<string> words;

};

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

}

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

void dictionary::lookupWords()
// Lookup words using binary search
{

}