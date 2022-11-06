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
    //constructors / destructor
    heap(const vector<T>& data);
    ~heap();

    //public member functions
    int parent(int i);
    int left(int i);
    int right(int i);
    T getItem(T n);

    void initializeMaxHeap(vector<T> &x);
    void maxHeapify(int root, int bottom);
    void buildMaxHeap();
    void heapsort();

    private:
    // private data member
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

template <typename T>
heap<T>::~heap(){}
// Destructor

template <typename T>
int heap<T>::parent(int i)
// Get parent
{
    return (i + 1 ) / 2 - 1;
}


template <typename T>
int heap<T>::left(int i)
// Get left
{
    return 2 * (i + 1) - 1;
}


template <typename T>
int heap<T>::right(int i)
// Get right
{
    return 2 * (i + 1);
}


template <typename T>
T heap<T>::getItem(T n)
// Returns the nth item in the heap
{
    // Range check??

    return heap[n]
}

template <typename T>
void heap<T>::initializeMaxHeap(vector<T> &list)
// Function to initialize a heap
{
    for (int i = 0; i < list.size(); i++)
    {
        heap.push_back{list[i]}
    }

    buildMaxHeap();
}

template <typename T>
void heap<T>::maxHeapify(int root, int bottom)
// Function to recursively swap elements to reorder heap so the root is on top
{
    // decrease bottom every time function is called
    bottom--;

    // initialize vars
    int leftChild  = left(root);
    int rightChild = right(root);
    int larger;

    // condition 
}
