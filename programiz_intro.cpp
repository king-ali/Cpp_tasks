#include <iostream>

using namespace std;

void print_no()
{
    int a;
    cout << "Enter number ";
    cin >> a;
    cout << endl
         << a << endl;
}

void add_no()
{
    int a;
    int b;
    cout << "Enter two numbers ";
    cin >> a >> b;
    cout << endl
         << a + b << endl;
}

void quo_remainder()
{
    int divisor, dividend, quotient, remainder;

    cout << "Enter dividend and divisor ";
    cin >> dividend >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl
         << "Remainder = " << remainder << endl;
}

void sizeis()
{
    cout << "Size of char " << sizeof(char) << " byte" << endl;
    cout << "Size of int " << sizeof(int) << " bytes" << endl;
    cout << "Size of float " << sizeof(float) << " bytes" << endl;
    cout << "Size of double " << sizeof(double) << " bytes" << endl;
}

int swap_no(int *a, int *b)
{
    // a 10 b 20
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void aschi()
{
    char c;
    cout << "Enter a character ";
    cin >> c;
    cout << "ASCII Value of " << c << " is " << int(c) << endl;
}

void multi_no()
{
    int a;
    int b;
    cout << "Enter two numbers ";
    cin >> a >> b;
    cout << endl
         << a * b << endl;
}

int main()
{

    // print_no();
    // add_no();
    // quo_remainder();
    sizeis();

    // int a = 6, b = 9;
    // cout << "Swapping no are " << a << " " << b << endl;
    // swap_no(&a, &b);
    // cout << "Swapped no are " << a << " " << b << endl;

    // aschi();

    // multi_no();

    return 0;
}
