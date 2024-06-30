#pragma once
#include <iostream>
#include "Iterator.h"

struct SElement
    {
        int data;
        SElement* next;
        SElement() = default;
        SElement(const int& data_, SElement* next_ = nullptr) :
            data{ data_ }, next{ next_ } {}
        ~SElement() = default;
    };

class MyList
{
public:
    MyList();
    MyList(const std::initializer_list<int>&);
    void push_back(const int&);
    int pop_back();
    int count() { return size; }
    int pop_front();
    void print();
    void push_front(const int&);
    void insert(const int&, int);
    void remove(const int&);
    bool isEmpty() { return this->size == 0; }
    ~MyList();

    int& Get(int);
   
private:
    size_t size;
    SElement* head;
};
