#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h, m;
    cin >> n >> h >> m;
    vector<int> maxH(n+1, h);
    for(int i=0;i<m;i++){
        int l, r, x;
        cin >> l >> r >> x;
        for(int j=l;j<=r;j++)
            maxH[j] = min(maxH[j], x);
    }
    long long profit = 0;
    for(int j=1;j<=n;j++)
        profit += (long long)maxH[j]*maxH[j];
    cout << profit << endl;
}
