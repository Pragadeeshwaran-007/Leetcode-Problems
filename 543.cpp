#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, b;
    long long mod;
    cin >> n >> m >> b >> mod;

    vector<int> a(n);
    for (auto &x : a) cin >> x;

    // dp[j][k] = number of ways to have written j lines with k total bugs
    vector<vector<long long>> dp(m + 1, vector<long long>(b, 0));
    dp[0][0] = 1;

    for (int i = 0; i < n; i++) {
        vector<vector<long long>> g(m + 1, vector<long long>(b, 0));
        for (int j = 0; j <= m; j++) {
            for (int k = 0; k < b; k++) {
                g[j][k] = dp[j][k];
                if (j > 0 && k - a[i] >= 0) {
                    g[j][k] = (g[j][k] + g[j - 1][k - a[i]]) % mod;
                }
            }
        }
        dp = g;
    }

    long long ans = 0;
    for (int k = 0; k < b; k++) {
        ans = (ans + dp[m][k]) % mod;
    }

    cout << ans << endl;
    return 0;
}
