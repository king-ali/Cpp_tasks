#include <iostream>
using namespace std;

int main(){

    // Declaring array
    int a[]={1,3,4,5};
    double b[3] = {6,7,8};

    // Inserting element
    int n;
    cout<<"inserting element"<<endl<<"Enter value of n" <<endl;
    cin>>n;
    int c[n];
    int* cptr[n];
    cptr[n] =&c[n];

    cout<<"enter values"<<endl;
    for(int i=0; i<n;i++){
        cin>>c[i];
    }
    for(int i=0; i<n;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl<<"Address is: ";
    for(int i=0; i<n;i++){
        cout<<cptr[i]<<" ";
    }

    // Removing element
    int p;
    cout<<endl<<"Enter index to delete element"<<endl;
    cin>>p;
    for(int i=p;i<n;i++){
        c[i] = c[i+1];
    }
    --n;
    for(int i=0; i<n;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl<<"Address: ";
    for(int i=0; i<n;i++){
        cout<<cptr[i]<<" ";
    }

    // Searching element
    cout<<endl<<"Enter Element to search"<<endl;;
    int x;
    cin>>x;
    for (int i = 0; i < n; i++)
        if (c[i] == x)
            cout<<"Element is at index "<<i<<"and address: "<<cptr[i]<<endl;

    return 0;
}