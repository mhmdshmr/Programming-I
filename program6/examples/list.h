#ifndef LIST_HEADER
#define LIST_HEADER
#include <iostream>
using namespace std;

//Put your datatype here
typedef int DataType;

struct Node
{
  DataType data;
  Node *next;
};

class List
{
  Node *head;
public:
  List()
  {
     head = 0;
  }

  void insert(DataType);

  void remove(DataType);

  Node *get_head() { return head; }
};
#endif
