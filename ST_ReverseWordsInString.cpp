#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string Rev_Words(string s) {
    if(s.size()<=0)return "";
    string ans="";
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==' '){
            string word="";
            for(int j=i+1;s[j]!=' ' && j<s.size();j++){
                word+=s[j];
            }
            ans+=word + ' ';
        }
    }
    for(int i=0;s[i]!=' ' && i<s.size();i++){
        ans+=s[i];
    }
    return ans;
}


int main() {
    string s = "hello my name is ansh";
    cout << Rev_Words(s) << endl;
    return 0;
}