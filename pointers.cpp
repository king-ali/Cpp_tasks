//
// Created by User on 10/08/2022.
//


#include <iostream>
#include <typeinfo>
using namespace std;

int pointers() {
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


    return 0;
}

