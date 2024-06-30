#include <iostream>
#include <vector>
#include "MyList.h"


int main()
{
	{
		MyList myList({ 1,2,3,4,5 });
		myList.print();
		std::cout << myList.pop_back() << std::endl;
		myList.print();
		std::cout << myList.count() << std::endl;
		myList.push_back(5);
		myList.print();
		std::cout << myList.count() << std::endl;
		std::cout << myList.pop_front() << std::endl;
		myList.print();
		std::cout << myList.count() << std::endl;
		myList.push_front(1);
		myList.print();
		std::cout << myList.count() << std::endl;
		myList.insert(3, 2);
		myList.print();
		std::cout << myList.count() << std::endl;
		myList.remove(3);
		myList.print();
		std::cout << myList.count() << std::endl;
		std::cout << std::endl;
	}
	return 0;
}