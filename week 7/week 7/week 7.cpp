#include <iostream>
using namespace std;

int main(){
	
    //first test:    (Address)

	int x;
	x = 1993;
	int* ptr;
	ptr = &x;
	cout << *ptr << endl;
  

	//second test pointer :    (arr = pointer)

	int arr[3] = { 2 , 4 , 7 };
	cout << *arr<<' ';
	cout << *(arr + 1)<<' ';
	cout << *(arr + 2)<<' ';
	

	//third test :        (direct poinetr)

	int* ptr = new int;
	*ptr = 10;
	cout << *ptr << endl;

	double* salary = new double;
	*salary = 1500;
	cout << *salary << endl;

	int* arr = new int[3];
	*ptr = 7;
	*(ptr + 1) = 9;
	*(ptr + 2) = 11;
	for (int i = 0; i < 3; i++)
		cout << ptr[i] << ' ';
	cout << endl;


	return 0;
}
