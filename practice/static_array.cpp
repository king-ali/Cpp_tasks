#include <iostream>
using namespace std;

int main (void) {
	//static arrays decalarations
	//<data type> variable[array size]
	int myarray_int[10]; //size range is (0,9)
	char myarray_char[7];//(0,6)

	 //element insertion
	myarray_int[0] = 9;
	myarray_int[2] = 89; //a[0] + 2*offset

//	cout << myarray_int[10] << endl;
//	cout << myarray_int[7] << endl;

	int i=0;
	for(;i<10;i++) {
		myarray_int[i] = i+2;
		cout << myarray_int[i] << " ";
	}
	cout << endl;

	// 0th memory segment  
	// 1st
	// 2nd
	// .
	// .
	// 9th 

	//a[7] = a[0] + 7*offset

	int *ptr;
	//element insertion via pointer
	ptr = &myarray_int[0];
	cout << ptr << " " << *ptr << endl;
//	ptr += 9;
//	cout << ptr << " " << *ptr << endl;	


	int j=0;
	for(;j<10;j++) {
		cout << *ptr << " ";
		ptr += 1; 
	}
	cout << endl;

	return 0;
}
