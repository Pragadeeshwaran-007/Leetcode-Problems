#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string t = "heidi";
    int j = 0;
    for(int i = 0; i < (int)s.size() && j < (int)t.size(); i++){
        if(s[i] == t[j]) j++;
    }
    cout << (j == (int)t.size() ? "YES" : "NO") << endl;
    return 0;
}
