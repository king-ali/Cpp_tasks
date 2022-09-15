#include <iostream>
#include <string.h>
using namespace std;

class dateis
{
private:
    string endtime;
    int year;
    int month;
    int day;
    string date;
    int hour;
    int minute;
    int second;
    int day_of_year;
    string start_time;

public:
    dateis(){

    }

    dateis(string sstart_time, string eendtime, string ddate, int yyear, int ssecond)
    {
        start_time = sstart_time;
        endtime = eendtime;
        date = ddate;
        year = yyear;
        second = ssecond;
    }

    void set_date_data(string sstart_time, string eendtime, string ddate, int yyear, int ssecond)
    {
        start_time = sstart_time;
        endtime = eendtime;
        date = ddate;
        year = yyear;
        second = ssecond;
    }

    void get_date_data()
    {
        cout << "Start time: " << start_time << " "
             << "End time: "<<endtime
             << " " << endl;
        cout << "Date is: " << date << " "
             << " Year is: " << year << " "
             << "Second: " << second << endl;
    }
};

class userAgent
{
private:
    string firstdomain;
    string seconddomain;
    string conference_type;
    string conference_id;

public:
    userAgent(){

    }
    userAgent(string ffirstdomain, string sseconddomain, string conferencetype, string conferenceid){
    firstdomain = ffirstdomain;
    seconddomain = sseconddomain;
    conference_type = conferencetype;
    conference_id = conferenceid;
    }

    void set_useragent_data(string ffirstdomain, string sseconddomain, string conferencetype, string conferenceid){
    firstdomain = ffirstdomain;
    seconddomain = sseconddomain;
    conference_type = conferencetype;
    conference_id = conferenceid;
    }

    void get_useragent_data(){
        cout<<"First domain: "<<firstdomain<<" "<<"Second domain: "<<seconddomain<<endl;
        cout<<"Conference type: "<<conference_type<<" "<<"Conference id: "<<conference_id<<endl;
    }



};

// Multiple inheritance
class database: public userAgent, public dateis{

    public:
    database(){

    }

    database(string sstart_time, string eendtime, string ddate, int yyear, int ssecond,
     string ffirstdomain, string sseconddomain, string conferencetype, string conferenceid){
        set_date_data(sstart_time, eendtime, ddate, yyear, ssecond);
        set_useragent_data(ffirstdomain, sseconddomain, conferencetype, conferenceid);
    }

    void  set_database(string sstart_time, string eendtime, string ddate, int yyear, int ssecond,
     string ffirstdomain, string sseconddomain, string conferencetype, string conferenceid){
        set_date_data(sstart_time, eendtime, ddate, yyear, ssecond);
        set_useragent_data(ffirstdomain, sseconddomain, conferencetype, conferenceid);
    }

    void get_database(){
        get_date_data();
        get_useragent_data();
    }

};


class network
{
public:
    string ip_address = "10.849.94";
    string link_speed = "10400";
    int port = 8000;
    string relay_ip = "3892.2987";
    bool flag = true;
};

class general_data
{
public:
    string id;
    string name = "Previous data of calls";
    string date;
    string no;
    string port = "6000";
    string start_time;
    string end_time;
};

class networks_data
{
public:
    string record = "mgfgk";
    string mediatype;
    string connection_line;
    bool audio_video;
    string duration = "7000";
};

class qualit_data
{
public:
    string speed = "4mb";
    string connectivity_type = "jjj";
    string roaming;
};


