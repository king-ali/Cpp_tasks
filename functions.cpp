#include <iostream>
using namespace std;

//declarations
// <return type> <function name> (parameter 1, 2, 3 , ...)
int sum (int a, int b);
double product (double a, double b);
void display (int a);
void sum2 (int a, int b, int* o);

//Main Function
int main (void) {

	//calling
	//(1)call by value
	//(2)call by reference
	int mysum = 2;
	display(mysum);

	mysum = sum(56, 102);
	display(mysum);

	sum2(2,3, &mysum);
	display(mysum);

	//double myproduct = product(7.6, 9.9);

//	display(mysum);
//	display(myproduct);
//	display(out);

	return 0;
}

//definitions
int sum (int a, int b) { return a+b; }
double product (double a, double b) { return a*b; }
void display (int a) { cout << endl << &a << " " << a << endl; };

void sum2 (int a, int b, int* o) { *o = a+b; }
