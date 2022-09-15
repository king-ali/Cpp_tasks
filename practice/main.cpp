#include <iostream>
#include <string>
using namespace std;

// int add(int a, int b)
// {
//     int c;
//     c = a + b;
//     return c;
// }



class Employee
{

public:
    string name;
    int age;
};



int main()
{

    // cout<<"hello world"<<endl;
    // int a, b, c;
    // a = 9;
    // short sa;
    // long la;
    // float pi = 3.14;
    // double jk = 13.678;
    // string ali ="ali";
    // cout<< a << endl <<ali<< jk;
    // cout<<"enter first number"<<endl;
    // cin>> a;
    // cout<<"enter second number"<<endl;
    // cin>> b;
    // cout<<"a/b "<< (float) a/b <<endl;

    // if (a>100){
    //     cout<<"greater than 100"<<endl;
    // }
    // else if (a>50){
    //     cout<<"greater than 80"<<endl;
    // }
    // else {
    //     cout<<"not greater"<<endl;
    // }

    int index = 0;
    // while (index < 10)
    // {
    //     cout << "adding " << index << endl;
    //     index++;
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "adding " << i << endl;
    // }

    // cout<<"enter first number"<<endl;
    // cin>> a;
    // cout<<"enter second number"<<endl;
    // cin>> b;
    // cout<<"sum is "<< add(a, b)<< endl;

    int arrayd[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    // cout<<arrayd[0][0]<<endl;
int value;
int xcounter = 0;
int ycounter = 0;
while(ycounter < 2) {

   cout << arrayd[ycounter][xcounter] << " ";
   value = arrayd[ycounter][xcounter];
    
    if(xcounter == 3) {
        xcounter = 0;
        ycounter++;
    }

   
   xcounter++; 
}
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "the value" << i << j << endl
    //              << arrayd[i][j] << endl;
    //     }
    // }

    // string name = "harry";
    // cout << "name " << name << endl;
    // cout << "name " << name.length() << endl;
    // cout << "sbt is " << name.substr(1, 3) << endl;

    // pointers 
    // int a = 9;
    // int* ptra;
    // ptra = &a;
    // cout<<ptra<<endl;
    // cout<<*ptra<<endl;

    // Employee ali;
    // ali.name = "ali";
    // ali.age =23;
    // cout<<ali.name<<ali.age<<endl;

    return 0;
}
