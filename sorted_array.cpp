//
// Created by User on 10/08/2022.
//


#include <iostream>
using namespace std;



int sorted_array(){

    int a[10]={3,2,45,4,5,9};
    int n=6;
    int temp;

    cout<<"Printing array"<<endl;
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

            }
        }
    }
    cout<<"sorted array "<<endl;
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}