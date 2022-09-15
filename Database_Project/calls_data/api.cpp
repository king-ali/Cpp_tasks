#include <iostream>
#include <string.h>
#include "db.cpp"

using namespace std;
int choice;
string u_name, pass;

// general_data gd;
// networks_data nd;
// qualit_data qd;
database db;

// dateis dat("12", "13", "18-03-2022", 2022, 98740);
// userAgent ua("younite.com", "younite1.com", "uyfe", "23");

int connect_func(string ip, string port, string u_name, string pass){
    int c_f=0;
    if(ip == "9" && port == "800" && u_name == "user" && pass == "user"){
        c_f = 0;
        return c_f;
    }
    else if(ip == "9" && port == "800" && u_name == "admin" && pass == "admin") {
        c_f = 1;
        return c_f;
    }
    else {
        c_f = 2;
        return c_f;
    }

}


void set(string sstart_time, string eendtime, string ddate, int yyear, int ssecond, string firstdomain, 
string seconddomain, string conferenetype, string conferenceid){

    db.set_database(sstart_time,  eendtime, ddate, yyear, ssecond, firstdomain, 
    seconddomain, conferenetype, conferenceid);
    // dat.set_date_data(sstart_time, eendtime, ddate, yyear, ssecond);
    // ua.set_useragent_data(firstdomain, seconddomain, conferenetype, conferenceid);
    // cout<<"name "<<gd.name<<endl;
    // cout<<"port "<<gd.port<<endl;

    // cout<<"endtime is: "<< dat.endtime<<endl;
    // cout<<"year is: "<< dat.year<<endl;;
    // // dat.hour;
    // // dat.minute;
    // cout<<"start time is: " << dat.start_time <<endl;

    // cout<<"first domain name: " << ua.firstdomain<< endl;
    // cout<< " second domain name" << ua.seconddomain<<endl;
    // cout<<"confrenece type: "<<  ua.conference_type<<endl;
    // cout<<"conference id: "<< ua.conference_id<< endl;
    // // ua.client_app_version

    // cout<<"record "<<nd.record<<endl;
    // cout<<"duration "<<nd.duration<<endl;
    
    // cout<<"speed "<<qd.speed<<endl;
    // cout<<"connectivity type "<<qd.connectivity_type<<endl;
}



void getdata(){

    db.get_database();
    // dat.get_date_data();
    // ua.get_useragent_data();

    // dat.endtime = "18";
    // dat.year = 2022;
    // dat.month = 8;
    // dat.day = 14;
    // dat.date = "14-08-2022";
    // dat.hour = 2;
    // dat.minute = 40;
    // dat.second = 72;
    // dat.day_of_year = 21;
    // dat.start_time = "16";

    // ua.firstdomain = "younite.com";
    // ua.seconddomain = "younite/1.com";
    // ua.conference_type = "younite.audio";
    // ua.conference_id = "66668327ccf-72a9s-jskd723";
    // ua.client_app_version = "18";

    // gd.name = "New_user_data_added";
    // gd.port = "9000";

    // nd.record = "dofohd";
    // nd.duration = "40000";
    
    // qd.speed = "2mb";
    // qd.connectivity_type = "derhf";

}


// int first_show(){
//     cout << "====== CALLS DATABASE MANAGEMENT SYSTEM ======" << endl;

//     cout<<"Enter user name"<<endl;
//     cin>>u_name;
//     cout<<"Enter pass"<<endl;
//     cin>>pass;

//     cin >> choice;
//     cout<<choice; 
//     return choice;
// }
