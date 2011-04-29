#include <iostream>
using namespace std;
#include "list.h"

int timecheck( int time) {

int valid = time;



for(;;)
if(time < 800 || time > 1700) {


  cout << "sorry Please enter a vaid time:\n" << endl;
 cin >> time;

}else{

if ( time/60 || time%15){ 

return time;
}else{

break;


}

}

}



main()
{


char select, quit, del, input;
List X;
Appointment *p;
for(;;)
{

//Need to create a user menu


cout << "\n Please choose an option:\n";
cout << "(N) -- New Appointment\n";
cout << "(D)-- Delete Appointment\n";
cout << "(L) -- List Appointments\n";
cout << "(Q) -- Exit Program\n";
cin >> select;
cout << endl << endl;

for(;;){
// New Appointment

if ( select == 'n' || select == 'N'){

string name, problem;
int time;
p = new Appointment;

cout << "Please Enter Patient name: \n";
cin >> name; 
p->name = name;

cout << "Problem Patient is having: \n";
cin >> problem;

p->problem = problem;

cout << "Enter an appointment time:\n";
cin >> time; 
p->time = timecheck(time);
X.insert(p);
break;
}
else if  ( select == 'l' || select == 'L') {

Appointment *record = X.get_head();
cout << "Here are the current records\n";
if(record == 0){

cout << "No Appointments \n\n";
break;
}else{
while (record)
 {
cout << "Name: " << record->name << endl;
cout << "Problem: " << record->problem << endl;
cout << "Time:\n" << record->time << endl;
cout << endl << "\n+++++++++++++++++++++++++++++++++++\n";
record  = record->next;
 
               }
break;
        }

    }else if ( select == 'D' || select == 'd' ){
Appointment *p = X.get_head();
string name;
cout << "Name of Person you want to delete : " << endl;
cin >> name; 

while (p){
if (name == p->name){ 
X.remove(p);
cout << "Appointment has been deleted\n";
break;
}else {
p = p->next;
cout << "Name not found" << endl;
break;

}

}
break;
}
else if (select == 'Q' || select == 'q'){
				cout << "Are you sure you want to quit? (Y/N)\n";
				cin >> quit;

}
else
				cout << "ERROR: Please select 'N' for New, 'L' for View, 'D' for Delete, 'L', or 'Q' for Quit!";
		if (quit == 'Y' || quit == 'y')
			break;
		if (quit == 'N' || quit == 'n'){
			cout << endl;
			break;
		}
		}
	if (quit == 'Y' || quit == 'y')
		break;
	}
}



/*   
List X;
   X.insert(5);
   X.insert(7);
   X.insert(1);

   Node *p = X.get_head();
   cout << "Here is the linked list data:\n";
   while (p)
   {
     cout << p->data << endl;
     p = p->next;
   }
   cout << "\nThe average = " << avg_list(X) << endl;
   cout << "Now we remove 7 and traverse the list again:\n";
   X.remove(7);
   p = X.get_head();
   while (p)
   {
     cout << p->data << endl;
     p = p->next;
   }
   return 0;
*/


