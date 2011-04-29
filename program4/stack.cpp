#include "stack.h"


Stack::Stack()
{
_top = -1;
}
bool Stack::empty()
{
return _top == -1;
}
bool Stack::full()
{
return _top == MAX_SIZE - 1;
}
void Stack::push(int item)
{
if (! full())
	data [++_top] = item;
}
int Stack::pop()
{
	if (! empty())
	return data[_top--];
}

int Stack::top()
{
return data[_top];
}

