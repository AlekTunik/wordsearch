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
    char getChar(int rows, int cols, int direction, int size);
    char readGrid(string grid_name);

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
    
	ifstream puzzle(grid_file);
	puzzle >> cols >> rows;
	for (int row = 0; row < rows; row++)
	{
		vector<char> newRow(cols);
		matrix.push_back(newRow);
		for (int col = 0; col < cols; col++)
		{
			puzzle >> matrix[row][col];
		}
	}
	puzzle.close();
}



