// #include <iostream>
// using namespace std;

// //TODO; access elements from even (ali)/odd (mustafa) indexes

// int main (void) {
// 	int myarray[10]; //static array
	
// 	//(1) initialization
// 	int* ptr;
// 	int size = 10;
	
// 	//(2) allocation
// 	//allocation via 'new' operator (C++) <->
// 	//allocation via 'malloc' operator (C/C++)
// 	//allocation via 'calloc' operator (C/C++)
// 	ptr = new int[size](); //range from 0-19 access via ptr[indx/0-19]

// 	//(3) data insertion
// 	//ptr = &<memory cell>
// 	for(int j=0; j<size; j++)
// 		ptr[j] = j;
	
// 	//(4) data access
// 	for(int j=0; (j<size); j++) {
// 		if (j%2 == 0)
// 			cout << ptr[j] << endl;
// 	}
// 	cout << ptr[0] << endl;
// 	cout << ptr[1] << endl;
// 	cout << ptr[10] << endl;

// 	// deallocation of memory
// 	delete ptr;

// 	return 0;
// }






#include <iostream>
using namespace std;

//TODO; access elements from even (ali)/odd (mustafa) indexes

int main (void) {
	int myarray[10]; //static array
	
	//(1) initialization
	int* ptr;
	int size = 20;
	
	//(2) allocation
	//allocation via 'new' operator (C++) <->
	//allocation via 'malloc' operator (C/C++)
	//allocation via 'calloc' operator (C/C++)
	ptr = new int[size](); //range from 0-19 access via ptr[indx/0-19]

	//(3) data insertion
	//ptr = &<memory cell>
	for(int j=0; j<size; j++)
		ptr[j] = 12+j;
	
	//(4) data access
	cout << ptr[0] << endl;
	cout << ptr[1] << endl;
	cout << ptr[20] << endl;

	// deallocation of memory
	delete ptr;

	return 0;
}

