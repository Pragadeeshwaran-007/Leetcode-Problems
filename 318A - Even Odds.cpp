#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pos(int n, int k) {
        long long oddCount = (n+1)/2;
        if (k <= oddCount) {
            return (2 * k-1);
        }
        else {
            return (2 * (k-oddCount));
        }
    }
};

int main() {
    Solution s;
    int n , k;
    cin >> n >> k;
    cout << s.pos(n,k);
    return 0;
}
