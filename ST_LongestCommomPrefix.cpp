#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string Long_Comm_Prefix(string arr[], int n) {
    if (n == 0) {
        return "";
    }

    
    sort(arr, arr + n);

    
    string first = arr[0];
    string last = arr[n - 1];
    string str = "";

    
    for (int i = 0; i < min(first.size(), last.size()); i++) {
        if (first[i] == last[i]) {
            str += first[i];
        } else {
            break;
        }
    }

    return str;
}

int main() {
    string arr[] = {"flex", "flow", "flye"};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << Long_Comm_Prefix(arr, n) << endl;
    return 0;
}
