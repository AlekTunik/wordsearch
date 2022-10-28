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

    int getRows();
    int getCols();
    char readGrid(string grid_file);

    private:
    matrix<char> grid;
    int _rows;
    int _cols;
    
};

int grid::getRows()
// Get number of rows
{
    return _rows;
}

int grid::getCols()
// Get number of columns
{
    return _cols;
}


char grid::readGrid(string grid_file)
// Read letters from grid file and store in matrix
{
    // open file
	ifstream myGrid(grid_file);

    // Grabs the first 2 integers of the txt file
    // Read in number of rows and columns
	myGrid >> _rows >> _cols;

    //resize the matrix to grid dimensions
    grid.resize(_rows, _cols);

    // Populate matrix with grid elements
	for (int i = 0; i < _rows; i++)
    {
        for (int j = 0; j < _cols; j++)
        {
            myGrid >> grid[i][j];
        }
    }
    
    // Close the file   
	myGrid.close();
}



