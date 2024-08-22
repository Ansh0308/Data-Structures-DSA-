#include<iostream>
#include<string>
using namespace std;

string Re_Out_Par(string s) {
    string ans="";
    int count=0;
    for(int i = 0; i<s.size() ; i++) {
        if(s[i]=='('){
            if(count){
                ans+=s[i];
                }
                count++;
            
            }

            else{
                count--;
                
                if (count){
                    ans+=s[i];
                }
                
                
            }
        
        
    }

    return ans;
}

int main() {
    string s = "(()()())";
    cout << Re_Out_Par(s) << endl;
    return 0;
}
