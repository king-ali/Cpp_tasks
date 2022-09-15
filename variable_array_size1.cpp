#include <iostream>
using namespace std;

int main(void)
{
    int myarray[10];
    int *ptr;
    float *ptr_float;
    char *ptr_char;
    double *ptr_double;
    int size;
    cout << "Enter number: ";
    cin >> size;

    ptr = new int[size];
    ptr_float = new float[size];
    ptr_char = new char;
    ptr_double = new double[size];
    *ptr_char = 'v';
    cout << "char value: " << *ptr_char << endl;

    for(int i=0;i<size;i++) {
        ptr_double[i] = i + 0.23;
    }
    cout<<"Double values: ";
    for(int j= 0; j<size;j++){
        cout<<ptr_double[j]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        ptr_float[i] = i + 0.1;
    }
    cout<<"Float values: ";
    for (int j = 0; j < size; j++)
    {
        cout << ptr_float[j] << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        ptr[i] = i;
    }
    cout << "Value of Even indexes for int: ";
    for (int j = 0; j < size; j++)
    {
        if (j % 2 == 0)
            cout << ptr[j] << " ";
    }
    cout << endl;

    delete ptr;
    delete ptr_float;
    delete ptr_char;
    delete ptr_double;
    return 0;
}
