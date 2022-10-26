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
    void sortWords();
    void lookupWords();

    private:
    vector<string> words;

};

void readDict()
// Read words from dictionary file
{

}

void sortWords()
// Sort words using selection sort
{

}