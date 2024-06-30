#pragma once
#include "MyList.h"
class MyList;

class MyIterator {
public:
	MyIterator(MyList* aList);
	void First();
	void Next();
	bool IsDone() const;
	int CurrentItem() const;
private:
	MyList* _list;
	long _current;
};

//MyIterator Nulliterator(nullptr);