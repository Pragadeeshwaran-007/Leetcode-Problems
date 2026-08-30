#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        vector<long long> a(n);
        for (auto &x : a) scanf("%lld", &x);
        
        vector<long long> gaps;
        gaps.push_back(a[0] - 0);
        for (int i = 1; i < n; i++) gaps.push_back(a[i] - a[i-1]);
        gaps.push_back(1440 - a[n-1]);
        
        long long maxGap = 0;
        int cnt120 = 0;
        for (auto g : gaps) {
            maxGap = max(maxGap, g);
            if (g >= 120) cnt120++;
        }
        
        bool ok = (maxGap >= 240) || (cnt120 >= 2);
        printf(ok ? "YES\n" : "NO\n");
    }
    return 0;
}
