#include <iostream>
using namespace std;


class entity {

public:
    float x,y=0;
    entity(){
        cout<<"constructor"<<endl;

    }
    void print(float x,float y){
        cout<<"x is: "<<x<<" y is: "<<y<<endl;

    }
    ~entity(){
        cout<<"Destructor"<<endl;
    }

};

void func(){
    entity e1;
    e1.x=9;
    e1.y-71;
    e1.print(e1.x, e1.y);

}

int main(){

    func();


    return 0;
}