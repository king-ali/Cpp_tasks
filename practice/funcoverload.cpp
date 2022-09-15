# include <iostream>
# include <string>
using namespace std;

// int funcp(int a, int b){

//     return a+b;
// }
// float funcp(float a, float b){

//     return a+b;
// }

class Car {
    public:
    string brand;
    string model;
    int year;

    Car(string x, string y, int z){
        brand = x;
        model = y;
        year = z;
    }
    
    void show1() {
        cout << brand<<endl;
    }

};

class Top {
    public:
    string name;
    string type;
    int year;

    Top(string a, string b, int c){
        name =a;
        type= b;
        year = c;
    }

    void show() {
        cout<< type<<endl;
    }
};

int main() {

    Car car2("ssj", "shsuhs", 122);
    Top top1("kk", "ss", 3);
    top1.show();
    car2.show1();
    cout << car2.brand<<endl;
    cout << top1.type<<endl;
}
