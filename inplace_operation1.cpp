//
// Created by User on 10/08/2022.
//

#include <iostream>
using namespace std;



int inplace_operation1(){

    int a[10]={3,2,45,4,5,9};
    int n=6;
    int j;
    cout<<"Printing array"<<endl;
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        j=2+i;
        if(j%2==0){
            cout<<"even "<<i<<" "<<a[i]<<endl;
            a[i]=2*a[i];
        }

    }
    cout<<"In place operation exercise squaring even while odd remain same "<<endl;
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}