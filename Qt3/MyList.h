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
    int getSize() { return size; }
    int pop_front();
    void print();
    void push_front(const int&);
    void insert(const int&, int);
    void remove(const int&);
    bool isEmpty() { return this->size == 0; }
    ~MyList();

    class Iterator {
    public:
        Iterator() :ptr(nullptr) {};
        Iterator(SElement* ptr_) :ptr(ptr_) {};
        ~Iterator() = default;// dont know what to do with it

        Iterator First();
        Iterator Next()
        {
            //nullptr can be
            ptr = ptr->next;
            return *this;
        }
        bool isDone()
        {
            return ptr == nullptr; // I cmp ptr with nullptr because of the next element of the last element of list is equal nullptr ( how i belive)
        }
        int CurrentItem()
        {
            return ptr->data;
        }

        bool operator!=(const Iterator& it) const
        {
            return ptr != it.ptr;
        }
        bool operator==(const Iterator& it) const
        {
            return ptr == it.ptr;
        }

    private:
        SElement* ptr;
    };
    Iterator First() 
    { 
        return this->head; 
    }
private:
    size_t size;
    SElement* head;
};
