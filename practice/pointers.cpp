#include <iostream>
using namespace std;

int main() {
	//TODO; declare data-types
	int a = 10;
	char b = 'v';
	//TODO; pointer declarations
	// (1) pointer holds an address -> call by name
	// (2) pointer can access memory (value) -> call via (*)pointer_name
	int *ptr_a; 

	char *ptr_b;

	ptr_a = &a;	
	cout << ptr_a  << " " << *ptr_a << endl;
	return 0;
}
