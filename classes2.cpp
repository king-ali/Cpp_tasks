#include <classes1.h>
#include <iostream>

using namespace std;


int main(){


    person p1;
    cout<<p1.x<<" " <<p1.y<<endl;
    p1.move_x(2);
    cout<<p1.x<<" " <<p1.y<<endl;
    p1.move_y(2);
    cout<<p1.x<<" " <<p1.y<<endl;

    return 0;
}