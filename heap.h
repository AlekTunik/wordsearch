// Project #3: Word Search Part B
// 
// Group Members: Lisa Byrne, Kaite O'Flaherty, Alek Tunik
//
// Description: Header file for the dictionary class
// Assumption: 
// Work done: added quicksort function

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector> 
#include "d_except.h"
#include "d_matrix.h"

using namespace std;

template <typename T>
class heap 
{
// needs descript
    public:
    heap(const vector<T>& data);
    int parent(int i);
    int left(int i);
    int right(int i);
    T getItem(item n);

    private:
    vector<T> _heap;
    
}; // End template heap class

template <typename T>
heap<T>::heap(const vector<T>& data)
// Constructor 
{
    for(int i = 0; i < data.size(); i++)
    {
        _heap.push_back(data[i]);
    }
}