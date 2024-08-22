#include<iostream>
#include<string>
using namespace std;

string Rev_Words(string s) {
    string ans, word;
    for(int i = s.size() - 1; i >= 0; i--) {
        if(s[i] == ' ') {
            ans += word + " ";
            word = "";
        } else {
            word = s[i] + word;
        }
    }
    ans += word; // Add the last word
    return ans;
}

int main() {
    string s = "Hello My Name";
    cout << Rev_Words(s) << endl;
    return 0;
}
