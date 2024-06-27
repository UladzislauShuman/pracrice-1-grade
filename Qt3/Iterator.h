#pragma once
#include "MyList.h"
class MyIterator {
public:
    MyIterator() :ptr(nullptr) {};
    MyIterator(SElement* ptr_) :ptr(ptr_) {};
    ~MyIterator() = default;// dont know what to do with it

    MyIterator First()
    {
        //ptr = first
    }
    MyIterator Next() 
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
    
    bool operator!=(const MyIterator& it) const
    {
        return ptr != it.ptr;
    }
    bool operator==(const MyIterator& it) const
    {
        return ptr == it.ptr;
    }
    
private:
    SElement* ptr;
};

MyIterator Nulliterator(nullptr);