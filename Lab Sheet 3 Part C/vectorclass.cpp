
#include<iostream>
#include"vectorClass.h"
using namespace std;

// Function to add an element at the last
void vectorClass::push(int data)
{

    // if the number of elements is equal to the
    // capacity, that means we don't have space to
    // accommodate more elements. We need to double the
    // capacity
    if (current == capacity) {
        int* temp = new int[2 * capacity];

        // copying old array elements to new array
        for (int i = 0; i < capacity; i++) {
            temp[i] = arr[i];
        }

        // deleting previous array
        delete[] arr;
        capacity *= 2;
        arr = temp;
    }

    // Inserting data
    arr[current] = data;
    current++;
}

// function to add element at any index
void vectorClass::push(int data, int index)
{

    // if index is equal to capacity then this
    // function is same as push defined above
    if (index == capacity)
        push(data);
    else
        arr[index] = data;
}

// function to extract element at any index
int vectorClass::get(int index)
{

    // if index is within the range
    if (index < current)
        return arr[index];
}

// function to delete last element
void vectorClass::pop() {
    current--;
}

// function to get size of the vector
int vectorClass::size() {
    return current;
}

// function to get capacity of the vector
int vectorClass::getcapacity() {
    return capacity;
}

// function to print array elements
void vectorClass::print()
{
    for (int i = 0; i < current; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vectorClass::vectorClass()
{
    //declared array pointer as int array
    arr = new int[1];
    capacity = 1;
    current = 0;
}

vectorClass::~vectorClass()
{
    delete[] arr;
    arr = NULL;
}