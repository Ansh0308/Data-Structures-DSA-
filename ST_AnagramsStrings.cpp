#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool isAnagrams(string s,string t) {
    if(s.size()!=t.size()){
        return false;
    }
    for(int i=0;i<s.size();i++){
        int flag=0;
        char check=s[i];
        for(int j=0;j<t.size();j++){
            if(check==t[j]){
                flag=1;
            }
        }
        if(flag==0){
            return false;
        }
    }
    return true;
    
}

int main() {
    string s = "atm";
    string t="mat";
    cout << isAnagrams(s,t) << endl;
    return 0;
}