#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1 = "codeali";
    string s2 = "alicode";
    int len1 = s1.length();
    int len2 = s2.length();
    if(len1==len2){
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        cout<<s1<<endl<<s2<<endl;
        if(s1==s2){
            cout<<"They are anagram"<<endl;
        }
        else{
            cout<<"They are not anagram"<<endl;
        }
    }
    else{
        cout<<"They are not anagram"<<endl;
    }
}


