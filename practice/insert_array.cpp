#include <iostream>
using namespace std;



int main(){


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
    n=n+1;
    cout<<endl<<"Insertig elemet 5 at start"<<endl;
    for(int i=n; i>=0; i--){
        c[i+1]=c[i];

    }
    c[0]=5;
    
    for(int i=0; i<n;i++){
        cout<<c[i]<<" ";
    }
    n++;
    cout<<endl<<"Inserting element at anywhere"<<endl;
    cout<<"enter where you want the number ";
    int x;
    cin>>x;

    for (int i = n; i >= x; i--){
    c[i + 1] = c[i];
}
    cout<<"entering 4 at "<<x<<endl;
    c[x]=4;

    for(int i=0; i<n;i++){
        cout<<c[i]<<" ";
    }

    return 0;
}

