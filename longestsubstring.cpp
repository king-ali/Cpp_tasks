#include <iostream>
#include <string>

using namespace std;


int main(){
    string v1="aliaalifr";
    string v2;
    char n;
    int len = v1.size();
    int len2;
    len++;

    for(int i=0;i<len;i++){ 
        for(int j=i+1;j<len;j++){
            if(v1[i]==v1[j]){
                len2=v2.size();
                len2++;
                for(int k=0;k<len2;k++){
                    for(int p=k;p<len2;p++){
                        if(v2[k]!=v2[p]){
                            v2 = v2+v1[i];
                        }
                        
                    }
                    
                }
                
            }

        }

    }
    cout<<v2;

    return 0;
}