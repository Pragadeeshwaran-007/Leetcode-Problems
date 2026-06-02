#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        long long sum = 0;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            sum += a;
        }
        
        long long nk = (long long)n * k;
        
        // Shaunak wins if sum is odd OR n*k is even
        if(sum % 2 == 1 || nk % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
