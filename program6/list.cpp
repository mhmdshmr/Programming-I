#include "list.h"
//Implementation for the list class

void List::insert(Appointment *item)
{
Appointment *newnode = new Appointment;
Appointment *curr = head, *prev = 0;
newnode->name = item->name;
newnode->time = item->time;
newnode->problem = item->problem;
newnode->next = 0;
while ( curr && curr->time < newnode->time ) 
 {

    prev = curr;
    curr = curr->next;
  }


if(!curr){
		if(!prev){
			head = newnode;
		}else{
			prev->next = newnode;
		}
	}else if(curr->time > newnode->time){
		if(!prev){
			head = newnode;
		}else {
			prev->next = newnode ;
		}
		newnode ->next = curr;
		}else{
			cout << "ERROR: Schedule Conflict!\n\n";
		}
}



/*
  if (prev)
     prev->next = newnode;
else
     head = newnode;
  newnode->next = curr;
}
*/

void List::remove(Appointment *item)
{
  Appointment *curr = head, *prev = 0;

  while (curr && curr->name.compare(item->name))
  {
     prev = curr;
     curr = curr->next;
  }

  if (curr)
  {
    if (! prev)
      head = curr->next;
    else
      prev->next = curr->next;
    delete curr;
  }
  else
    cout << "Item to be removed not found\n";
}
