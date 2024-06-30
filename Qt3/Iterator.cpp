#include "Iterator.h"

MyIterator::MyIterator(MyList* aList):_list(aList), _current(0){}

void MyIterator::First()
{
	_current = 0;
}

void MyIterator::Next()
{
	_current++;
}

bool MyIterator::IsDone() const
{
	return _current >= _list->count();
}

int MyIterator::CurrentItem() const
{
	if (this->IsDone()) {
		throw "iterator out of bounds";
		return -1;
	}
	else {
		return _list->Get(_current);
	}
}
