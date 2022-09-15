#include <iostream>
#include <string.h>
using namespace std;

class calls_data
{
private:
    string name;
    int number;
    string ids;

public:
    calls_data(){

    }
    
    calls_data (string nname, int nnumber, string iids){
    name = nname;
    number = nnumber;
    ids = iids;
    }

    void show_data(){
    cout << "Name: " << name << " Number: " << number << "  IDS: " << ids << endl;
    }

    string delete_names(){
        return name; 
    }
};


calls_data add_function(){
    string name, ids;
    int number;
    cout << "Enter name" << endl;
    cin >> name;
    cout << "Enter number" << endl;
    cin >> number;
    cout << "Enter ids" << endl;
    cin >> ids;
    calls_data c(name, number,ids);
    return c;

}

int main()
{
    int choice;
    calls_data e[20];
   
    int index = 0;
    int count = 0;
    int n = 0;
    string delet_name;
    string current_name = " ";
    string name, ids;
    int number;

    while (true)
    {
        cout << "====== Employee DATABASE MANAGEMENT SYSTEM ======" << endl;

        cout << "\n 1. Add    Records";
        cout << "\n 2. show   Records";
        cout << "\n 3. Delete Records";
        cout << "\n 4. Exit   Program" << endl;

        cout << "Select Your Choice : ";

        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Adding Call data" << endl;
            // cout << "Enter name" << endl;
            // cin >> name;
            // cout << "Enter number" << endl;
            // cin >> number;
            // cout << "Enter ids" << endl;
            // cin >> ids;
            // calls_data c("aa", 9,"dj");
            e[index] = add_function();
            count++;
            index++;
            break;
        case 2:
            cout << "Showing Call data" << endl;
            for (int i = 0; i < count; i++)
            {
                e[i].show_data();
            }
            break;
        case 3:
            cout << "3" << endl;
            cout << "Enter name of Call to delete" << endl;
            cin >> delet_name;

            for(int j=0;j<=count;j++){
                current_name = e[j].delete_names();
                if(delet_name==current_name){
                    e[j]=e[j+1];
                    e[j]=e[j+1];    
                }
                
            }      
            cout << "Call data deleted" << endl;
            count--;
            index--;
            delet_name = " ";
            current_name = " ";
            break;
        case 4:
            cout << "Program exit" << endl;
            return 0;
            break;
        default:
            cout << "Wrong choice enter correct choice" << endl;
            break;
        }
    }

    return 0;
}
