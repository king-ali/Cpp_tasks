//
// Created by User on 10/08/2022.
//


#include <iostream>
#include <string>
using namespace std;


class maxiss{
public:

    maxiss() {
        cout<<"max is: ";
    }

    int maxab(int a, int b){
        if(a>b)
            return a;
        else if (b>a)
            return b;
        else
            return 0;

    }
};



int class_max_number() {

    int a=10;
    int b=20;
    int z=0;
    maxiss maxx;
    z = maxx.maxab(a,b);
    cout<<z;

    return 0;
}

