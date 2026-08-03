#include <bits/stdc++.h>
using namespace std;

int n;
int a[15];

bool isSorted(int mask){
    int prev=-1;
    for(int i=0;i<n;i++){
        if(mask&(1<<i)){
            if(prev!=-1 && a[prev]>a[i]) return false;
            prev=i;
        }
    }
    return true;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        int full=(1<<n)-1;
        vector<char> visited(1<<n,0);
        queue<int> q;
        q.push(full);
        int ans=n;
        while(!q.empty()){
            int mask=q.front(); q.pop();
            if(visited[mask]) continue;
            visited[mask]=1;
            if(isSorted(mask)){
                ans=min(ans, __builtin_popcount(mask));
                continue; // game stops here, don't remove further
            }
            for(int i=0;i<n;i++){
                if(mask&(1<<i)){
                    int child = mask & ~(1<<i);
                    if(!visited[child]) q.push(child);
                }
            }
        }
        printf("%d\n", ans);
    }
}
