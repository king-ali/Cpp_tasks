//
// Created by User on 10/08/2022.
//

#include <iostream>
using namespace std;

int first_prime_numbers(){

    // Print 100 prime numbers
    int i,k;
    int n =100;
    for(i=2;i<n;i++){

        for(k=2;k<i;k++){
            if(i%k==0){
                break;
            }
        }
        if(k==i){
            cout<<k<<" ";
        }
    }

}


