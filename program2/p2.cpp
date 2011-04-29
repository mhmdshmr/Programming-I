#include <iostream>
#include <cmath>

using namespace std;


int main()
{

            const double tol = .01;
            double value = -1;
            double old_value, new_value;
            bool ii = false;
            int n = 0;



            while (!ii)
  {
	cout << "**********Square root of a number********** \n"
        << endl << endl;
        cout << " Enter a positive number: ";
        cin >> value;
        if (value > 0  ) ii = true;
       
        else {
            cout << "Please enter a positive number, also the number can not be 0" ;
                    ii = false;
        }
}

	
	old_value = value;
	new_value = (old_value + value / old_value)/2;

	while (fabs((new_value - old_value)/new_value) > tol)
	{
		old_value = new_value;
                new_value = (old_value + value/old_value)/2;
		n++;

                if ( n > 100)
                    cout << "something went wrong!";

	}

        cout << new_value << " and the number of loops " << n << "\n";


    }
