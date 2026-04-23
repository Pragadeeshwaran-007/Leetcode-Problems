#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        // Group i (0-indexed): small number (i+1), then n+2i+1, n+2i+2
        // Median of each group = n+2i+1
        for(int i=0;i<n;i++){
            if(i) printf(" ");
            printf("%d %d %d", i+1, n+2*i+1, n+2*i+2);
        }
        printf("\n");
    }
}
