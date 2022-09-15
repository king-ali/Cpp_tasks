//
// Created by User on 10/08/2022.
//

#include <iostream>

using namespace std;

int fibonacci_series(){

    // Fibonacci series

     int n1=0, n2=1, n3,i;
     cout<<n1<<" "<<n2<<" ";
     for(i=0;i<=10;i++) {

         n3 = n1 + n2;
         cout << n3 << " ";
         n1 = n2;
         n2 = n3;

     }


}




