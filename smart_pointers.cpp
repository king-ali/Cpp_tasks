#include <iostream>
#include <memory>

using namespace std;


int main(){

    unique_ptr<int> ptr_a(new int);
    shared_ptr<int> ptr_b(new int);
    shared_ptr<int> ptr_c = ptr_b;
    cout<<ptr_b<<endl;
    cout<<ptr_c<<endl;





    return 0;
}