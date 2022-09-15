#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<int> v1 = {2,6,9,5};

    // int v1[] = {2,5,7,9};

    v1.push_back(10);
    v1.pop_back();
    v1[0]=10;
    cout<<v1[4]<<endl;
    cout << v1.at(3)<<endl;
    for(int i:v1){
        cout<<i<<" ";
    }

    return 0;
}