#pragma once
#include<iostream>

class vectorClass {
    //made sure variables declared are private.
private:
    //changed pointer to array name
    int* arr;
    int capacity;
    int current;

public:
    //added function definitions
    void push(int data);
    void push(int data, int index);
    int get(int index);
    void pop();
    int size();
    int getcapacity();
    void print();

    //added constructer
    vectorClass();
    //added destructer
    ~vectorClass();
};