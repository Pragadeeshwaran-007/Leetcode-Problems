#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int count = 0;
    int i = 0;
    while (i < n) {
        if (i+1 < n && s[i] != s[i+1]) {
            count++;
            i += 2;
        } else {
            count++;
            i += 1;
        }
    }
    cout << count << endl;
    return 0;
}
