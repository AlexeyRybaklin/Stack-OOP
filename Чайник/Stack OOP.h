#ifndef STACK
#define MAX 1000

class Stack
{
	int top;

public:
	int myStack[MAX];

	Stack()
	{
		top = -1;
	}

	bool push(int x);
	int pop();
	bool isEmpty();
};

#endif
