//
// Created by User on 10/08/2022.
//

#include <iostream>
using namespace std;

int sum_of_numbers(){

    // Sum of numbers
     int sum, n, r;
     sum = 0;
     n=248;
     while(n!=0){

         r=n%10;
         sum = sum + r;
         n=n/10;
     }
     cout<<"sum is "<<sum<<endl;
}
