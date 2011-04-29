/* *****************************************************
 *              File:   prog1.pp                        *
 *              Author: Duggan Roberts                  *
 *               Dr. Stockwel Programming 1             *
 *                                                      *
 *          Created on January 18, 2011, 8:54 PM        *
 ********************************************************/



#include <iostream>
#include <iomanip>
using std::setprecision;
#include <cmath>
using namespace std;

int main()
{
double deposit,rate, periods, compound =0, continuous = 0, e = 2.71828;
int term;

// Should Validate the input but outside the scope of the assignment.

cout << fixed << setprecision(2);
cout << "Enter Amount of deposit : ";
cin >> deposit;
cout << "Enter Rate :";
cin >> rate;
cout << "Enter periods :";
cin >> periods;
cout << "Enter term :";
cin >> term;

double nrate =(rate/100);


if(periods > 0)
    compound = deposit*pow(1. + (nrate/periods),(term*periods));

else
 
    continuous = deposit*pow(e,(nrate*term));


if (compound)

    cout << "Normal compounding yields " << showpoint << compound << endl;

    
else 

   cout << "continuous compounding yields " << showpoint << continuous << endl;

    
}
