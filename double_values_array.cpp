//
// Created by User on 10/08/2022.
//


#include <iostream>

using namespace std;


int double_values_array(){

    int a[10]={2,4,15,10,20,9};
    int n=6;
    cout<<"Printing array"<<endl;
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl<<"Double Values are: ";
    for(int i=0; i<n; i++){
        for(int j=i+1;j<n;j++){
            if(2*a[i]==(a[j])){
                cout<<endl<<a[j]<<" at index "<<j;
            }
        }
    }

    return 0;
}
