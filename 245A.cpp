#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long xa=0, ya=0, xb=0, yb=0;
    for(int i=0;i<n;i++){
        int t,x,y;
        cin >> t >> x >> y;
        if(t==1){ xa+=x; ya+=y; }
        else { xb+=x; yb+=y; }
    }
    cout << (xa*2>=xa+ya ? "LIVE" : "DEAD") << "\n";
    cout << (xb*2>=xb+yb ? "LIVE" : "DEAD") << "\n";
}
