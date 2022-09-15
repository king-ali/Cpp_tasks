#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
	//TODO; declare data-types
	int a = 10;
    int z = 39999;
	char b = 'h';
    bool c = false;
    short int shortint = 8;
    double d = 3.14;
    float f = 3.1;
    long double longdouble = 3.123;

    // Pointers
    int  *ptr_a;
    int *ptr_z;
    char *ptr_b;
    bool *ptr_c;
    short int *ptr_shortint;
    double *ptr_d;
    float *ptr_f;
    long double *ptr_longdouble;

	ptr_a = &a;
    ptr_z = &z;
    ptr_b = &b;
    ptr_c = &c;
    ptr_shortint = &shortint;
    ptr_d = &d;
    ptr_f = &f;
    ptr_longdouble = &longdouble;
	cout << "int: "<< " Address is: " << ptr_a  << " Value is: " << *ptr_a << endl;
    cout << "int: "<<" Address is: " << ptr_z  << " Value is: " << *ptr_z << endl;
	cout << "char: "<<" Address is: " << ptr_b  << " Value is: " << *ptr_b << endl;
	cout << "bool: "<< " Address is: " << ptr_c  << " Value is: " << *ptr_c << endl;
	cout << "shortint: "<<" Address is: " << ptr_shortint  << " Value is: " << *ptr_shortint << endl;
	cout << "double: " << " Address is: " << ptr_d  << " Value is: " << *ptr_d << endl;
	cout << "float: " << " Address is: " << ptr_f  << " Value is: " << *ptr_f << endl;
	cout << "longdouble: " << " Address is: " << ptr_longdouble  << " Value is: " << *ptr_longdouble << endl;
	
    // Errors Analysis
    //	ptr_a = &b; where ptr_a is declared int and b declared char
    // cannot convert 'char*' to 'int*' in assignment	


// Output in Terminal

// int:  Address is: 0x61feec Value is: 10
// int:  Address is: 0x61fee8 Value is: 39999
// char:  Address is: h?£ Value is: h
// bool:  Address is: 0x61fee6 Value is: 0
// shortint:  Address is: 0x61fee4 Value is: 8
// double:  Address is: 0x61fed8 Value is: 3.14
// float:  Address is: 0x61fed4 Value is: 3.1
// longdouble:  Address is: 0x61fec0 Value is: 3.123
    
    return 0;
}
