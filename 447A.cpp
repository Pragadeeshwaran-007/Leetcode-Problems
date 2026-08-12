#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, n;
    cin >> p >> n;
    vector<bool> used(p, false);
    int ans = -1;
    for(int i = 1; i <= n; i++){
        long long x;
        cin >> x;
        int h = x % p;
        if(used[h]){
            if(ans == -1) ans = i;
        } else {
            used[h] = true;
        }
    }
    cout << ans << endl;
    return 0;
}
