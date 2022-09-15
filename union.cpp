#include <iostream>

using namespace std;


union uni {
    int no;
    char ch;
    int no2[4];
};


struct stru {
    int no;
    char ch;
    int no2[4];
};


enum en {
    a,b,c
};

int main(){
    

    union uni u1;
    struct stru s1;
    cout<<"Size is: "<<endl;
    cout<<sizeof(u1)<<endl;
    cout<<sizeof(s1)<<endl;

    u1.no = 65;
    cout<<"Before " <<endl;
    cout<<u1.no<<endl;
    cout<<u1.ch<<endl;
    cout<<"After " <<endl;
    u1.ch = 'a';
    cout<<u1.no<<endl;
    cout<<u1.ch<<endl;

    cout<<"Enum "<<endl;
    en e1;
    e1=a;
    cout<<e1<<endl;

    return 0;
}
