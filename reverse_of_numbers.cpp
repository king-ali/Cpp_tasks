//
// Created by User on 10/08/2022.
//



#include <iostream>
using namespace std;

int reverse_of_numbers(){

    // REversee of a number
     int sum, n, r,t;
     sum = 0;
     n=248421;
     t=n;
     while(n!=0){

         r=n%10;
         sum = sum*10+ r;
         n=n/10;

     }
     cout<<"sum is "<<sum<<endl;
}
