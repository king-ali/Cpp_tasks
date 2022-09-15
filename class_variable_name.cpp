// #include <iostream>
// #include <string>
// using namespace std;

// class typeis {
//     public:
//     int mytype;
//     int mytype2;

//     typeis(){
//         cout<<"max is: ";
//     }

//     int max(int a, int b){
       
//         if(a>b)
//             return a;
//         else if(b>a)
//             return b;
//         else
//             return 0;
//     }
// };


// int main() {

//     typeis whatismax;
//     int x = 10;
//     int y = 20;
//     int z = 0;
//     z = whatismax.max(x, y);
//     cout<<z<<endl;
//     return 0;
// }

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



int main() {

    int a=10;
    int b=20;
    int z=0;
    maxiss maxx;
    z = maxx.maxab(a,b);
    cout<<z;

    return 0;
}

























