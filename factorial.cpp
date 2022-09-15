#include <iostream>
#include <string.h>
using namespace std;

int main(){


    // Sum of numbers
    // int sum, n, r;
    // sum = 0;
    // n=248;

    // while(n!=0){

    //     r=n%10;
    //     sum = sum + r;
    //     n=n/10;

    // }

    // cout<<"sum is "<<sum<<endl;


    // REversee of a number
    // int sum, n, r,t;
    // sum = 0;
    // n=248421;
    // t=n;

    // while(n!=0){

    //     r=n%10;
    //     sum = sum+ r*r*r;
    //     n=n/10;

    // }
    // if(t==sum){
    //     cout<<"Palindrome no."<<endl;
    // }
    // else{
    //     cout<<" Not Palindrome no."<<endl;
    // }
    // cout<<"sum is "<<sum<<endl;



    // int sum,r,hcf, a, b;
    // a=19;
    // b=12;
    // while(true){
    //     hcf = b;
    //     r = a%b;
    //     a=b;
    //     b=r;
    //     if(b==0){
    //         break;
    //     }
    // }

    // int sum,r,lcm, a, b;
    // a=20;
    // b=16;
    // r=0;
    // while(true){
        
    //     lcm = a;
    //     r = a%b;
    //     if(r==0){
    //         break;
    //     }
    //     a=a*2;

    // }
    // cout<<a<<endl;




    int a=2;
    int *ptr;
    ptr = &a;
    *ptr = 3;
    // cout<<a<<endl;
    int arr[]= {2,5,65,42,3};
    int *ptr_arr;
    ptr_arr = arr;
    // cout<<*(ptr_arr+2)<<endl;
    cout<<sizeof(ptr_arr)<<endl;
    string op = "dkdj dmsa";
    cout<<to_string(a)<<endl;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"size is "<<size<<endl;





    cout<<"hi";


}