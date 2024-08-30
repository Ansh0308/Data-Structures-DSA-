#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int Max_Nesting_parentheses(string s) {
    int max=0,count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            count++;
        }
        if(count>max){
            max=count;
        }
        if(s[i]==')'){
            count=0;
        }
    }
    return max;
    
}

int main() {
    string s = "()(())((()))";
    cout << Max_Nesting_parentheses(s) << endl;
    return 0;
}