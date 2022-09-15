//
// Created by User on 10/08/2022.
//

#include <iostream>
#include <cmath>

using namespace std;

void pow_int(int a, int b, int *c)
{

    int z = 1;
    for (int i = 0; i < b; i++)
    {
        z = z * a;
    }
    *c = z;
}

void pow_double(double a, double b, double *c)
{
    double z=1;
    for (int i = 0; i < b; i++)
    {
        z = z * a;
    }
    *c = z;
}

void pow_float(float a, float b, float *c)
{
    // When exponent is not integer
    *c = pow(a, b);
}

int pow_func()
{

    int c;
    void (*pow_ptr)(int, int, int *);
    pow_ptr = &pow_int;
    (*pow_ptr)(4, 3, &c);


    double d;
    void (*pow_dptr)(double, double, double *);
    pow_dptr = &pow_double;
    (*pow_double)(3.5, 4, &d);

    float f;
    void(*pow_fptr)(float, float, float*);
    pow_fptr = &pow_float;
    (*pow_fptr)(3.5, 2.4, &f);


    // Displaying results
    cout<<"For int"<<endl<< c << " "
        << &c << endl;
    cout<<"For double"<<endl<< d << " "
        << &d << endl;
    cout<<"For float"<<endl<< f << " "
        << &f << endl;

    return 0;
}
