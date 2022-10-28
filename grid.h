// Project #3: Word Search Part A
// 
// Group Members: Lisa Byrne, Kaite O'Flaherty, Alek Tunik
//
// Description: Header file for the grid class
// Assumption: 

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "d_except.h"
#include "d_matrix.h"

using namespace std;

class grid
// Read letters from a grid file and store in matrix
{
    public:
    void readGrid();

    private:
    matrix<char> grid;
    int rows;
    int cols;
    
};

void grid::readGrid()
// Read letters from grid file and store in matrix
{
    ifstream infile;
    infile.open("15x15s.txt"); // Put name of file in quotes

    //create object

    //size of grid
    cols();
    rows();

    // Need to add chars to matrix here utilizing matrix class


    // Probably use embedded for loops to get each char

}



