#if !defined(STACK_H)
#define STACK_H


const int MAX_SIZE =100;

class Stack {

int data[MAX_SIZE];
int _top;
public:
Stack();
bool empty();
bool full();
void push(int);
int pop();
int top();
};

#endif





