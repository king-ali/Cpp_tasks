#include <iostream>
#include <string.h>
#include <classes1.h>
using namespace std;

// Exercise
struct StudentRec{

    string name;
    int tuition = 100;
    float gpa;
    string major;

};


struct DateRec
{

    int year;
    int month;
    int day;

};

// Struct in struct
struct BookRec
{

    string title;
    string author;
    string publisher;
    float cost;
    DateRec publishDate;

};

// Accessing through header file

// class person{
// public:
//     int x = 17;
//     int y = 6;
// void move_x(int a){
//     x=x+a;
// }
// void move_y(int a){
//     y=y+a;
//     age++;
//     cout<<age<<endl;
// }
// private:
//     int age= 0;;
// };


class Circle{
public:
    void area(float r){
        cout<<2*3.14*r*r<<endl;
    }

};


int main(){


    StudentRec s1;
    cout<<"Enter student name ";
    cin>>s1.name;
    s1.tuition+=200;
    cout<<s1.tuition<<endl;
    cout<<"Enter student major ";
    cin>>s1.major;
    string cs= "computerscience";
    if(s1.major==cs){
        cout<<"yes its computer science exercise 3 complete"<<endl;
    }
    else{
        cout<<"not computerscience"<<endl;
    }
    BookRec b1;
    b1.publishDate.year=1999;
    cout<<b1.publishDate.year<<endl<<"Struct in struct Exercise 4 done"<<endl;



    person p1,p2;
    cout<<p1.x<<" " <<p1.y<<endl;
    p1.move_x(2);
    cout<<p1.x<<" " <<p1.y<<endl;
    p1.move_y(2);
    cout<<p1.x<<" " <<p1.y<<endl;
    cout<<"Exercise 6, 8, 9 done (Made and Accessed class through header file)"<<endl;

    Circle c1;
    cout<<"Area of circle with r =6"<<endl;
    c1.area(6);
    cout<<"Exercise 7 done"<<endl;



    return 0;
}