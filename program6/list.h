#ifndef LIST_HEADER
#define LIST_HEADER
#include <iostream>
#include <string>
using namespace std;

//Put your datatype here
struct Appointment
{
string name;
int time;
string problem;

Appointment *next;

};

/*
struct Node
{
  DataType data;
  Node *next;
};
*/

class List
{

  Appointment *head;

public:
 
 List()
  {
     head = 0;
  }

  void insert(Appointment *item);

  void remove(Appointment *item);

  Appointment *get_head() { return head; }
};
#endif
