#pragma once
#include "MyList.h"

class MyStack
{
public:
	MyStack();
	MyStack(const std::initializer_list<int>&);
	~MyStack();

    int pop();
	void push(const int&);
    bool empty() { return list->getSize() == 0; }

    void print();
    int maxElement();
    int size(){return list->getSize();}
    MyList* List(){return list;}
private:
	MyList* list;
};
