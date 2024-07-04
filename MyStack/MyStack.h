#pragma once
#include "MyList.h"

class MyStack
{
public:
	MyStack();
	MyStack(const std::initializer_list<int>&);
	~MyStack();

	int pop();
	void print();
	void push(const int&);
	bool isEmpty() { return list->getSize() == 0; }
private:
	MyList* list;
};