#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int base = n / m, rem = n % m;
    for (int i = 0; i < m; i++) {
        int val = base + (i < m - rem ? 0 : 1);
        cout << val << " ";
    }
    return 0;
}
