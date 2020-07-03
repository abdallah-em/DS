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


	return 0;
}
