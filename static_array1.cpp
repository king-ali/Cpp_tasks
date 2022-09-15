#include <iostream>
using namespace std;

int main() {

    // Declaring static array
    int size = 10;
    int myarray_int[size];
    float myarray_float[size];
    char myarray_char[3];
    double myarray_double[size];
    bool myarray_bool[3];
    long double myarray_longdouble1[size];

    myarray_char[0] = 'a';
    myarray_char[1] = 'b';
    myarray_char[2] = 'c';

    myarray_bool[0] = false;
    myarray_bool[1] = true;
    myarray_bool[2] = false;



    for(int i=0; i<10; i++) {
        myarray_int[i] = i;
        myarray_float[i] = i + 0.8;
        myarray_double[i] = i + 0.14;
        myarray_longdouble1[i] = i + 0.114;}



    // cout << myarray_int[11] << endl; // Return Garbage value on index 10
    // cout << myarray_float[16] << endl; // Return 0 on index 10
 
    // Pointers
    int *ptr_int;
    char *ptr_char;
    float *ptr_float;
    bool *ptr_bool;
    double *ptr_double;
    long double *ptr_longdouble;

    ptr_int = &myarray_int[0];
    ptr_char = &myarray_char[0];
    ptr_float = &myarray_float[0];
    ptr_double = &myarray_double[0];
    ptr_bool = &myarray_bool[0];
    ptr_longdouble = &myarray_longdouble1[0];
    // ptr_int +=1;
    // cout << "int: "<< " Address is: " << ptr_int << " Value is: " << *ptr_int << endl;
    cout << "char: ";
    for(int n=0; n<3; n++) {
        cout<< myarray_char[n] << " ";
    }
    cout<< endl;
    cout << "bool: ";
    for(int n=0; n<3; n++) {
        cout<< myarray_bool[n] << " ";
    }
    cout<<endl<< "int: ";
    int j=0;
	for(;j<10;j++) {
		cout << *ptr_int << " ";
		ptr_int += 1; 
	}
	cout << endl << "float:  ";
    for(j=0;j<10;j++) {
		cout << *ptr_float << " ";
		ptr_float += 1; 
	}
    cout << endl<< "double: ";
    for(j=0;j<10;j++) {
		cout << *ptr_double << " ";
		ptr_double += 1; 
	}
    cout << endl << "longdouble:  ";
    for(j=0;j<10;j++) {
		cout << *ptr_longdouble << " ";
		ptr_longdouble += 1; 
	}
    // Printing values
    // for(int i=0; i<10; i++) {
    //     cout << "For int " << myarray_int[i] << endl;
    //     cout << "For float " << myarray_float[i] << endl;
    // }


}

