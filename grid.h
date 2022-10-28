// Project #3: Word Search Part A
// 
// Group Members: Lisa Byrne, Kaite O'Flaherty, Alek Tunik
//
// Description: Header file for the grid class
// Assumption: 

#include <iostream>
#include <stdlib.h>
#include "d_except.h"
#include "d_matrix.h"

using namespace std;

class grid
// Read letters from a grid file and store in matrix
{
    public:
    void createMatrix();

    private:
    matrix<char> newMatrix;
    int rows;
    int cols;
    
};

void grid::createMatrix()
// Read letters from grid file and store in matrix
{
    ifstream infile;
    infile.open(" "); // Put path of file in quotes
    infile >> rows; // Grabs the 1st integer of the txt file (number of rows)
    infile >> cols; // Grabs the 2nd integer of the txt file (number of cols)

    // References matrix class
    // Creates a matrix sized to the grid dimensions
    newMatrix.resize(rows,cols); 

    //Populate matrix with grid elements
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
        {
            matrix = matrix
        }
    }

}



