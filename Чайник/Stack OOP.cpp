#include <iostream>
#include "Stack.h"
#define MAX 1000
using namespace std;

bool Stack::push(int item)
{
	if (top >= (MAX - 1))
	{
		cout << "Overflow!!!";
		return false;
	}
	else 
	{
		myStack[++top] = item;
		cout << item << endl;
		return true;
	}
}

int Stack::pop()
{
	if (top < 0)
	{
		cout << "Underflow!!!";
		return 0;
	}
	else
	{
		int item = myStack[top--];
		return item;
	}
}

bool Stack::isEmpty()
{
	return (top < 0);
}


int main()
{
	Stack stack;

	cout << "Stack push \n";
	stack.push(2);
	stack.push(4);
	stack.push(6);

	cout << "Stack pop \n";
	
	while (!stack.isEmpty())
		cout << stack.pop() << endl;

	return 0;
}