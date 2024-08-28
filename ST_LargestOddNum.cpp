#include<iostream>
#include<string>
using namespace std;

string Largest_odd_num(string s) {
    int stoInt =stoi(s);
    if(stoInt%2!=0){
        return s;
    }
    else{
        for(int i=s.size()-1;i>=0;i--){
            
            stoInt=int(s[i]);
            if(stoInt%2!=0){
                return s.substr(0,i+1);
            }
        }
    }
    return "";
}

int main() {
    string s = "52";
    cout << Largest_odd_num(s) << endl;
    return 0;
}