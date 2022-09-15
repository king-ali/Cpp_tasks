//
// Created by User on 10/08/2022.
//

#include <iostream>

using namespace std;


int delete_duplicat_array(){

    int a[20]={1,3,3,45,3,0,0,77};
    int n=8;
    cout<<"Printing array"<<endl;
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(int k=j;k<n;k++)
                    a[k]=a[k+1];
                n--;}
        }
    }
    cout<<endl<<"deleting duplicates"<<endl;
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }

    return 0;
}
