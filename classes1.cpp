#include <iostream>

using namespace std;


class person{
public:
    int x = 17;
    int y = 6;
void move_x(int a){
    x=x+a;
}
void move_y(int a){
    y=y+a;
    age++;
    cout<<age<<endl;
}
private:
    int age= 0;;
};


int main(){

    person p1,p2;
    cout<<p1.x<<" " <<p1.y<<endl;
    p1.move_x(2);
    cout<<p1.x<<" " <<p1.y<<endl;
    p1.move_y(2);
    cout<<p1.x<<" " <<p1.y<<endl;





    return 0;
}