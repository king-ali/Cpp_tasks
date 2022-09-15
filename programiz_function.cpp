#include <iostream>
#include <math.h>
using namespace std;


void prime(){
    
    int i, j, num;
    cout<<"Prime no to ";
    cin>>num;
    cout<<0<<" "<<1<<" ";
    for(i=3;i<num;i++){
        for(j=2;j<i;j++){
            if(i%j==0)
                break;
        }
        if(i==j){
            cout<<i<<" ";       

        }
    }
 
}


void no_sum_prime(){

int i, j, num,k[20], r=2;
    k[0]=0;
    k[1]=1;
    cout<<"Enter no. between 20 and 50: ";
    cin>>num;
    cout<<0<<" "<<1<<" ";
    for(i=3;i<50;i++){
        for(j=2;j<i;j++){
            if(i%j==0)
                break;
        }
        if(i==j){
            cout<<i<<" ";
            k[r]=i;
            r++;
        }
    }
    cout<<endl<<"Number as a Sum of Two Prime Numbers is "<<endl;
    for(int g=0;g<16;g++){
        for(int z=g;z<16;z++){
            if(k[g]+k[z]==num){
                cout<<k[g]<<"+"<<k[z]<<" = "<< num<<endl;
            }
        }
    }


}

void sum_of_natural_no();

void binary_to_decimal(){

    int num=0;
    cout<<"Enter no. in binary eg. 1101 : ";
    cin>>num;
    // num = 1101;
    int p=0, p1 = 0,rem;

    while (num!=0) {
    rem = num % 10;
    num = num / 10;
    p1 =p1+ rem * pow(2, p);
    p++;
    }
    cout<<"Decimal is: "<<p1<<endl;
    
}


int main(){


    cout<<"This program has functions of \nNumber of Prime numbers between 0-50"<<endl;
    cout<<"Number as a Sum of Two Prime Numbers"<<endl;
    cout<<"Sum of 20 natural no. using recursion function"<<endl;
    cout<<"Decimal of binary no."<<endl;
    // prime();
    // no_sum_prime();
    // sum_of_natural_no();
    binary_to_decimal();

    return 0;
}




void sum_of_natural_no(){
    int n = 20, sum = 0;
    int i=0;
    cout<<"Sum of 20 natural no. using recursion function"<<endl;
    while(i!=n){
        i++;
        sum = sum + i;
    }
    cout<<"Sum is: "<<sum<<endl;
}