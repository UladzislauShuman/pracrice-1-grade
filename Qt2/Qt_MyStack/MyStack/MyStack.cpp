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

int MyStack::maxElement()
{
    int max =this->list->Begin().GetPtr()->data;
    for (MyList::Iterator it = this->list->Begin();; it++)
    {
        if (it.GetPtr()->next == nullptr) {
            if(it.GetPtr()->data> max){
                max = it.GetPtr()->data;
            }
            break;
        }
        if(it.GetPtr()->data> max){
            max = it.GetPtr()->data;
        }
    }
    return max;
}
