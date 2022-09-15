#include <iostream>

using namespace std;

int main(){

    int num[4]={2,7,11,15};
    int len = sizeof(num)/sizeof(num[0]);
    int target = 9;
    int result[len];
    int k=0;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(num[i]+num[j]==target){
                result[k]=i;
                result[k+1]=j;
                k++;
                k++;
            }
        }
    }
    for(int i=0;i<k;i++){
        cout<<result[i];
    }


}