#include "MyStack.h"


MyStack::MyStack() 
{
	list = new MyList();
}

MyStack::MyStack(const std::initializer_list<int>& list_)
{
	list = new MyList(list_);
}

MyStack::~MyStack() 
{
	delete list;
}

void MyStack::push(const int& elem)
{
	this->list->push_front(elem);
}

int MyStack::pop()
{
	return this->list->pop_front();
}

void MyStack::print()
{
	this->list->print();
}

