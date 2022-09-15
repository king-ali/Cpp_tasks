#include <iostream>
#include <string>

using namespace std;

// Declaration
int sum(int a, int b);
int sum2(int a, int b, int* c);
double product(double a, double b);
double product2(double a , double b, double* c);
int diff(int a , int b, int* c);
void display(int a);
void display(double a);
// Main function
int main(){
    int mysum = 1;
    int a;
    int b;
    cout<<"For Sum "<<endl;
    mysum = sum(4, 4);
    cout<<"by value: ";
    display(mysum);
    cout<<"by refrence: ";
    mysum = sum2(4,6, &mysum);
    display(mysum);
    cout<<"For Product"<<endl;
    double myproduct =2;
    cout<<"by value: ";
    myproduct = product(4,5);
    display(myproduct);
    cout<<"by refrence: ";
    myproduct = product2(4,5,&myproduct);
    display(myproduct);
    int mydiff = 3;
    mydiff = diff(10, 5, &mydiff);
    cout<<"For diffirence"<<endl<<"by reference: ";
    display(mydiff);

    return 0;
}
// Definition
int sum(int a, int b){return a+b;}
int sum2(int a , int b, int* c){return *c=a+b;}
void display(int a){cout<< &a << " " << a <<endl;}
double product(double a, double b){return a*b;}
double product2(double a, double b, double* c){return *c=a*b;}
void display(double a){
    cout<<&a<<" "<<a<<endl;
}
int diff(int a,int b, int* c){
    return *c=a-b;
}
int prosum(int a, int b, int* c){
    return *c=(a+b)*(a+b);
}
