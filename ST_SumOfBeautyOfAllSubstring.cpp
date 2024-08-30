#include <iostream>
#include <string>
using namespace std;

int Sum_Beauty_SubST(string s) {
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            string temp = "";
            int maxFreq = 0;
            int minFreq = 1000;

            
            for (int a = i; a <= j; a++) {
                temp += s[a];
            }

            
            for (char c = 'a'; c <= 'z'; c++) {
                int count = 0;
                for (int b = 0; b < temp.size(); b++) {
                    if (temp[b] == c) {
                        count++;
                    }
                }
                if (count > 0) {
                    if (maxFreq < count) {
                        maxFreq = count;
                    }
                    if (minFreq > count) {
                        minFreq = count;
                    }
                }
            }

            
            sum += (maxFreq - minFreq);
        }
    }
    return sum;
}

int main() {
    string s = "aabcb";
    cout << Sum_Beauty_SubST(s) << endl;
    return 0;
}
