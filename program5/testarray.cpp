#include <iostream>
#include <cstdlib>
#include <ctime>

#include "intarray.h"

using namespace std;


float average( intArray & array)
{



float sum = 0;
for (int i = 0; i < array._size(); i++){
sum += array[i];

}

sum /= array._size();
return sum;






}



int main(){
	int i = 0;
	srand(time(0));
	bool end = false;
	char select;



	for(;;){
	
		intArray array(5);
		cout << "Initial Array Value of size: 5" << endl;
		for(i = 0; i < array._size(); i++)
		{
			array[i] = rand() % 100 + 1;
			cout << array[i] << " ";
		
			
		}
	
		cout << endl << endl;




		array.resize(10);
		cout << "\nInitial Array Value of size: 10" << endl;
		cout << "Lets look at the last  5 numbers now" << endl;
		for(i = 5; i < array._size(); i++){
			array[i] = rand() % 100 + 1;
			cout << array[i] << " ";

	
		}

		cout << "\n and the average of the last 5 numbers" << average(array) << endl;

		cout << endl << "\nPosting all 10 for size count 10 array:" << endl;
		for(i = 0; i < array._size(); i++){
			cout << array[i] << " ";
		}

		

		cout << endl;
		
		
		array.resize(5);
		cout << "\n Now lets set the Array back to  Value of size: 5" << endl;

		for (i = 0; i < array._size(); i++) {
			cout << array[i] << " ";
		}

		cout << "\n And the average of the array set back to 5 is" << average(array) << endl;


	
	
		cout << endl << endl;
		array.resize(20);
		cout << "\nInitial Array Value of size: 20" << endl;
		for (i = 0; i < array._size(); i++) {
			array[i] = rand() % 100 + 1;
			cout << array[i] << " ";
		}

		cout << "\n the average of the new 20 values is" << average(array) << endl;

		cout << endl;
		cout << "\nAnd the Array Resize Value back down to size: 10" << endl;
		array.resize(10);
		for (i = 0; i < array._size(); i++) {
			cout << array[i] << " ";
		}
		cout << "\n the average of this Array value is" << average(array) << endl;

		cout << endl;

		
	
		int n;
		cout << "\nEnter new resize number: " << endl;
		cin >> n;
		cout << "Initial Array Value of size: " << n << endl;

		array.resize(n);
		for (i = 0; i < array._size(); i++) {
			cout << array[i] << " ";
		
		}

		cout << "\n the average of the generated array is" << average(array) << endl;

		cout << endl << endl;

		








		//Run program or terminate
		for(;;){
			cout << "Again? (y/n) " << endl;
			cin >> select;

			if(select == 'y' || select == 'Y')
				break;
			else if(select == 'n' || select == 'N'){
				end = true;
				break;
			}else
				cout << "ERROR : Please enter Y for Yes or N for No :" << endl << endl;

		}
	//Ends first inf. for loop
	if(end == true)
		break;
	}
	return 0;
}

