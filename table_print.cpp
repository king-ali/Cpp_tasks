#include <iostream>

using namespace std;

int main(){


    // int i;
    // int n = 3;

    // for(i=n;i<=n*10;i+=n){
    //     cout<<i<<endl;
    // }


    // for(i=n*10;i>=n;i-=n){
    //     cout<<i<<endl;
    // }

    // int k=30;

    // while(k>=3){
    //     cout<<k<<endl;
    //     k-=3;
    // }

    // k = 3;
    // for(i=1;i<=10;i++){

    //     cout<<k*i<<endl;
    // }

    // Swapping two numbers

    // int a=107483434,b=2023;
    
    // a=a+b;
    // b=a-b;
    // a=a-b;
    // cout<<a<<" "<<b<<endl;

    // Fibonacci series

    // int n1=0, n2=1, n3,i;
    // cout<<n1<<" "<<n2<<" ";
    // for(i=0;i<=10;i++){

    //     n3=n1+n2;
    //     cout<<n3<<" ";
    //     n1=n2;
    //     n2=n3;

    // }


    // Fictorial 


    // int n = 5;
    // int f;
    // f = n;
    // for(int i =1;i<n;i++){
    //     f=f*i;
    // }
    // cout<<f<<endl;

    // cout<<"hi";



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