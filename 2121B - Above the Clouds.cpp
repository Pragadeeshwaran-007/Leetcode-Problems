#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        bool ok = false;
        // b must be non-empty, so take b as one character
        // a and c must also be non-empty => i from 1 to n-2
        for (int i = 1; i <= n - 2; i++) {
            if (freq[s[i] - 'a'] >= 2) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}
