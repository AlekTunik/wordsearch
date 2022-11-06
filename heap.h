// Project #3: Word Search Part B
// 
// Group Members: Lisa Byrne, Kaite O'Flaherty, Alek Tunik
//
// Description: Header file for the heap class
// Assumption: 
// Work done: all functs besides the max heapify

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
    void maxHeapify(vector<T> &A, int parentIndex);
    void buildMaxHeap(vector<T> &A);
    void heapsort(vector<T> &output);

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
} // end initializeMaxHeap

template <typename T>
void heap<T>::maxHeapify(vector<T> &A, int parentIndex)
// Function to recursively swap elements to reorder heap so the root is on top
{
    // decrease bottom every time function is called
    bottom--;

    // initialize vars
    int l  = left(parentIndex);
    int r = right(parentIndex);
    int largest;

    // find largest value
    if ((l < A.size()) && (A[l] > A[parentIndex]))
    {
        largest = 1;
    }
    else largest = i;

    if ((r <= A.size()) && (A[r] > A[largest]))
    {
        largest = r;
    }

    // float down
    if largest != parentIndex
    {
        swap(A[parentIndex], A(largest))
        maxHeapify(A, largest)
    }
} // end maxHeapify



template <typename T>
void heap<T>::buildMaxHeap(vector<T> &A)
// Function to 
{
    int heapSize = A.size();
    for (int i = (heapSize + 1) / 2; i >= 0; i--)
    {
        maxHeapify(A, i)
    }
}


template <typename T>
void heap<T>::heapsort(vector<T> & A)
// Function to 
{
    int heapSize = A.size();
    buildMaxHeap();

    for (int i = heapSize - 1; i > 0; i--)
    {
        swap(A[0], A[i]);
        heapSize--;

        maxHeapify(A, 1)
    }

    A = heap;
} // end heapSort