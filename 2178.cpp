#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        char buf[105];
        scanf("%s", buf);
        string s(buf);
        bool ok = true;
        for (size_t i = 0; i + 1 < s.size(); i++) {
            if (s[i] == 'Y' && s[i+1] == 'Y') {
                ok = false;
                break;
            }
        }
        printf(ok ? "YES\n" : "NO\n");
    }
    return 0;
}
