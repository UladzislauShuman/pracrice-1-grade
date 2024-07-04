#include <iostream>
#include <vector>
#include "MyList.h"
#include "MyStack.h"

int main()
{
	{
		MyStack myStack({ 5,4,3,2,1 });
		myStack.print();
		std::cout << myStack.pop() << std::endl;
		myStack.print();
		myStack.push(5);
		myStack.print();
	}
	return 0;
}