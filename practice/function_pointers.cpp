#include <iostream>
using namespace std;

//function
void sum (int a, int b, int* res) { *res = a+b; }
void product (double a, double b, double *res) { }
void dispINT (int) { }
void dispDOUBLE (double) { }

int main (void) {
	int a = 0;
	int *ptr_a = &a;
	
	// cout << &a << " " << a << endl; //direct access
	// cout << ptr_a << " " << *ptr_a << endl;  //indirect access via pointer

	int res;
	sum(4, 6, &res); //direct access
	cout << &res << " " << res << endl;

	//function pointer declaration
	void (*fptr)(int, int, int*);
	fptr = &sum;

	(*fptr)(7, 8, &res);
	cout << &res << " " << res << endl;

	return 0;
}
