#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        bitset<1001> reach;
        reach[0] = 1;
        for (int i = 0; i < n; i++) {
            int a;
            scanf("%d", &a);
            int step = 100 / a;
            bitset<1001> nxt;
            for (int x = 0; x <= a; x++) {
                nxt |= (reach << (x * step));
            }
            reach = nxt;
        }
        bool ok = true;
        for (int k = 0; k <= 100 * n; k++) {
            if (!reach[k]) { ok = false; break; }
        }
        puts(ok ? "Yes" : "No");
    }
    return 0;
}
