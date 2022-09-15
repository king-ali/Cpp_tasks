#include <iostream>
#include <string.h>
#include "api.cpp"
// #include "db.cpp"
using namespace std;

string a;

// Dummy func
// void messa(){
//     cout<<"hi"<<endl;
// }



int receive(string ip, string port, string user_name, string pass){
    struct r_d {
        string ip;
        string port;
        string user_name;
        string pass;


    };
    struct r_d rd;
    rd.ip = ip;
    rd.port = port;
    rd.user_name = user_name;
    rd.pass = pass;

    int connect = 0;
    connect = connect_func(rd.ip, rd.port, rd.user_name, rd.pass);
    return connect;
}
