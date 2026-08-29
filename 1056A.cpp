#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    set<int> cur;
    for(int i=0;i<n;i++){
        int r; cin>>r;
        set<int> s;
        for(int j=0;j<r;j++){int x;cin>>x;s.insert(x);}
        if(i==0) cur=s;
        else{
            set<int> inter;
            for(int x:cur) if(s.count(x)) inter.insert(x);
            cur=inter;
        }
    }
    for(int x:cur) cout<<x<<" ";
    cout<<endl;
}
