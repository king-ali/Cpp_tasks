//
// Created by User on 10/08/2022.
//

#include <iostream>

using namespace std;

int duplicate_zeros(){

    int arr[20] = {1, 5, 0, 4, 0, 56, 0, 74, 5};
    int n=8;
    cout<<"Printing array"<<endl;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }


    // Duplicate zero
    cout<<endl<<"Duplicate zero "<<endl;
    for (int i = n; i >= 0; i--) {
        if (arr[i] == 0) {
            n++;
            for (int j = n; j > i; j--) {
                arr[j] = arr[j-1];
            }
        }
    }
    for (int k = 0; k < n; k++) {
        cout<<arr[k]<<" ";
    }
    return 0;
}