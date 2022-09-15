#include <iostream>
#include <string.h>
using namespace std;


struct per{
    string a;
};

per p1;

struct person {
    string name = "aj";
    int age = 17;
} p2;


typedef struct Home {
    string name = "lis";
    int age=20;
}home;

int main(){

    struct person p1, p2, p[3];
    p1.age=19;
    p2.age=23;
    cout<<p1.age<<" "<<p2.age<<endl;
    cout<<p[2].age<<endl;

    home h1, h2;
    cout<<h1.age<<endl;


    home *ptr_h, h;
    ptr_h = &h;
    cout<<(*ptr_h).age<<endl;
    cout<<ptr_h->age<<endl;


    return 0;
}