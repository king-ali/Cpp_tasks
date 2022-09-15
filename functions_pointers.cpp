//
// Created by User on 10/08/2022.
//

#include <iostream>
using namespace std;

void sum(int a, int b, int* c){
    *c=a+b;
}
void product(double a, double b, double* c){
    *c=a*b;
}
void ddiff(int a, int b, int* c){
    *c=a-b;
}
void dispINT (int* a) { cout<<"dipINT "<<*a<<" " <<a<<endl;}
void dispDOUBLE (double* a) { cout<<"dispDOUBLE "<<*a<<" "<<a<<endl; }


int functions_pointers(){
    int a= 0;
    int* ptr_a=&a;
    int res_s;
    double res_p;
    sum(5, 5, &res_s);
    cout<<"For Sum"<<endl;
    cout<<res_s<<" "<<&res_s<<endl;
    // Pointer Function

    void (*fptr)(int , int , int* );
    fptr = &sum;
    (*fptr)(7,9,&res_s);
    cout<<res_s<<" "<<&res_s<<endl;

    cout<<"For Product"<<endl;
    void (*pfptr)(double , double , double* );
    pfptr = &product;
    (*pfptr)(7,9, &res_p);
    cout<<res_p<<" "<<&res_p<<endl;

    cout<<"Display function"<<endl;
    // dispINT(&res_s);
    // dispDOUBLE(&res_p);
    void (*disint_ptr)(int* );
    disint_ptr = &dispINT;
    (*disint_ptr)(&res_s);

    void (*disdouble_ptr)(double* );
    disdouble_ptr = &dispDOUBLE;
    (*disdouble_ptr)(&res_p);
    cout<<&disint_ptr<<endl;
    cout<<&disdouble_ptr<<endl;
    int res_d;
    void (*diff_ptr)(int , int, int*);
    diff_ptr = &ddiff;
    (*diff_ptr)(10,3, &res_d);

    return 0;
}

