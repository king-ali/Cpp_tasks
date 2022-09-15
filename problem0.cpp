#include <iostream>
#include <math.h>
#include <math.h>
using namespace std;


class p0{
public:
    int x=2;
    int y=2;
    void getx(){
        cout<<"Enter no."<<endl;
        cin>>x;
    }
    void gety(){
        cout<<"Enter no."<<endl;
        cin>>y;
    }
    void power(){
        cout<<pow(x,y)<<endl;
    }
    void logis(){
        cout<<log(x)<<endl;
    }


};


class p1{
public:
    int total_Cost;
    float portion_down_payment=0.25;
    int current_savings;
    int annual_salary;
    float portion_saved;
    int monthly_salary;
    float n;
    int c;

void getinput(){
    cout<<"Enter annual_salary"<<endl;
    cin>>annual_salary;
    cout<<"Enter portion_saved"<<endl;
    cin>>portion_saved;
    cout<<"Enter total_Cost"<<endl;
    cin>>total_Cost;

}
void months(){
    n=annual_salary*portion_saved;
    n=n/12;
    cout<<"Saving is: "<<n<<endl;
    c=total_Cost/n;
    cout<<"Months are: "<<c<<endl;
    }
};



int main(){
    // p0 v1;
    // v1.power();
    // v1.logis();

    // p1 v2;
    // v2.getinput();
    // v2.months();

    return 0;
}