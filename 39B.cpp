#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(auto&x:a) cin>>x;
    vector<int> years;
    int need=1;
    for(int i=0;i<n;i++){
        if(a[i]==need){
            years.push_back(2000+i+1);
            need++;
        }
    }
    cout<<years.size()<<"\n";
    for(int y:years) cout<<y<<" ";
    if(!years.empty()) cout<<"\n";
    else cout<<"0\n";
}
