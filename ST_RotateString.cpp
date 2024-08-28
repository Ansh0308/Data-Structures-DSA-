#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool isRotate(string s,string t) {
    if(s.size()!=t.size()){
        return false;
    }
    reverse(s.begin(),s.end());
    if(s==t){
        return true;

    }
    return false;
    
}

int main() {
    string s = "abc";
    string t="cba";
    cout << isRotate(s,t) << endl;
    return 0;
}