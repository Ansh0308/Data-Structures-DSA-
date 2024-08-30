#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string Longest_Palindrome(string s) {
    if(s.size()<=0)return "";
    int index=-1,maxlen=0;
    string ans="";
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            string temp="";
            for(int a=i;a<=j;a++){
                temp+=s[a];

            }
            string pal=temp;
            reverse(pal.begin(),pal.end());

            if(pal==temp){
                if(maxlen<temp.size()){
                    maxlen=temp.size();
                    index=i;
                }
            }
        }
    }
    if(index==(-1))return "";
    for(int i= index;i<index+maxlen && i<s.size();i++){
        ans+=s[i];

    }
    return ans;
}


int main() {
    string s = "abacaacxyz";
    cout << Longest_Palindrome(s) << endl;
    return 0;
}