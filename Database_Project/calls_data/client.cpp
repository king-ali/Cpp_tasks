#include <iostream>
#include <string.h>
#include "tcp_local.cpp"
using namespace std;

int main()
{

    string ip, port, u_name, pass;

    while (true)
    {
        cout << "====== CALLS DATABASE MANAGEMENT SYSTEM ======" << endl;
        int choice;
        cout << "Enter user name" << endl;
        cin >> u_name;
        cout << "Enter pass" << endl;
        cin >> pass;

        // choice = first_show();
        int r = 0;
        r = receive("9", "800", u_name, pass);
        if (r == 0)
        {
            cout << "Connection established as " << u_name << endl;
            set("16", "18", "03-11-2022", 2022, 23440, "useryounite.com", "useryounite/1.com", "idu", "98");
            getdata();
        }
        else if (r == 1)
        {
            cout << "Connection established as " << u_name << endl;
            // set();
            getdata();
        }
        else
        {
            cout << "Connection unsuccesfull" << endl;
            // send();
            break;
        }
    }

    return 0;
}
