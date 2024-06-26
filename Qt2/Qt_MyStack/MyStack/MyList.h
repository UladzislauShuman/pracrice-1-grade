#pragma once
#include <iostream>

class MyList
{
public:

    struct SElement
    {
        int data;
        SElement* next;
        SElement() = default;
        SElement(const int& data_, SElement* next_ = nullptr) :
            data{ data_ }, next{ next_ } {}
        ~SElement() = default;
    };
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
    class Iterator
    {
    public:
        Iterator() = default;
        Iterator(SElement* ptr_) :ptr(ptr_) {};
        Iterator operator++()
        {
            ptr = ptr->next;
            return *this;
        }
        Iterator operator++(int)
        {
            Iterator temp(*this);
            this->operator++();
            return temp;
        }
        int& operator*() { return  (*ptr).data; }
        const int& operator*()const { return  (*ptr).data; }
        bool operator!=(const Iterator& it) const
        {
            return ptr != it.ptr;
        }
        bool operator==(const Iterator& it) const
        {
            return ptr == it.ptr;
        }
        ~Iterator() = default;
        SElement* GetPtr() { return ptr; }
    private:
        SElement* ptr;
    };
    Iterator Begin() { return this->head; }
    //Iterator End() { return this->tail->next; }
private:
    size_t size;
    SElement* head;
};
