/***************************************************

		Program 3 By Duggan Roberts
		
**************************************************/

#include<iostream>

using namespace std;

void bubbleSort(int arr[], int n) {

      bool swapped = true;

      int j = 0;

      int tmp;

      while (swapped) {

            swapped = false;

            j++;

            for (int i = 0; i < n - j; i++) {

                  if (arr[i] > arr[i + 1]) {

                        tmp = arr[i];

                        arr[i] = arr[i + 1];

                        arr[i + 1] = tmp;

                        swapped = true;

                  }

            }



      }

}

int showMedian(int array[], int size)
{
int middle = size/2;
int median;
if (size%2==0)
{
    median = static_cast<int>(array[middle-1]+array[middle])/2;
}
else median = static_cast<int>(array[middle]);

return median;
}



void printdata(int array[], int size, int column ) {


for (int j = 0; j < size; j++){
cout << array[j] << "  ";
if (j == column -1) {
cout << endl;
}

}


}




int main() {

    int datfile[100];
    int x;
    int k = 0;
    int column = 10;

    cin >> x;
    while ( ! cin.eof())
    {
        datfile[k++] = x;
        cin >> x;
       
    }

        bubbleSort(datfile, k);

        int  p50 = showMedian(datfile, k);
	int  p25 = showMedian(datfile, k/2);
	int  p75 = showMedian(datfile + k/2 + 1, k/2);
 	
	printdata(datfile, k, column);

	cout << endl;
	
	cout << "the 25th percentile is : " << p25 << endl;
	cout << "the 50th percentile is: " << p50 << endl; 
	cout << "the 75th percentile is : " << p75 << std::endl ;
		


}

