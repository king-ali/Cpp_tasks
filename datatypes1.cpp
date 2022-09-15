#include <iostream>
#include <string>

using namespace std;


int main() {
// Declaring variables
char charac;
int int_a;
short int shortint;
long int longint;
float float_b;
double double_c;
long double longdouble;
bool d;
long long longlong;
string str;
// Checking datatypes
cout << "Size of char : " << sizeof(charac) << endl;
cout << "Size of int : " << sizeof(int_a) << endl;
cout << "Size of short int : " << sizeof(shortint) << endl;
cout << "Size of long int : " << sizeof(longint) << endl;
cout << "Size of float : " << sizeof(float_b) << endl;
cout << "Size of double : " << sizeof(double_c) << endl;
cout << "Size of long double: " << sizeof(longdouble) << endl;
cout << "Size of long long: " << sizeof(longlong) << endl;
cout << "Size of string: " << sizeof(str) << endl;
cout << "Size of bool: " << sizeof(d) << endl;

}