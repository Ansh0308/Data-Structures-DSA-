#include<iostream>
#include<string>
using namespace std;

bool isIsomorphic(string s,string t) {
    if(s.size()!=t.size()){
        return false;
    }
    char s1[256]={0};
    char t1[256]={0};
    for(int i=0;i<s.size();i++){
        if(s1[s[i]]!=t1[t[i]]){
            return false;
        }
        s1[s[i]]=i+1;
        t1[t[i]]=i+1;

    }
    return true;
}

int main() {
    string s = "app";
    string t="yoo";
    cout << isIsomorphic(s,t) << endl;
    return 0;
}