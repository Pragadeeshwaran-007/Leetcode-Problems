#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<vector<int>> a(n, vector<int>(n));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    
    bool good = true;
    for(int x=0;x<n && good;x++){
        for(int y=0;y<n && good;y++){
            if(a[x][y]==1) continue;
            bool found=false;
            for(int s=0;s<n && !found;s++){
                for(int t=0;t<n && !found;t++){
                    if(a[x][s]+a[t][y]==a[x][y]) found=true;
                }
            }
            if(!found) good=false;
        }
    }
    
    printf("%s\n", good ? "Yes" : "No");
    return 0;
}
