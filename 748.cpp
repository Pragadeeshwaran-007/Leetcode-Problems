#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, k;
    cin >> n >> m >> k;
    k--;
    long long lane = k / (2*m);
    long long rem = k % (2*m);
    long long desk = rem / 2;
    long long side = rem % 2;
    cout << lane+1 << " " << desk+1 << " " << (side == 0 ? "L" : "R") << endl;
    return 0;
}
