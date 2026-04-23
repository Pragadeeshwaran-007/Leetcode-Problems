#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            if(i) printf(" ");
            printf("%d %d %d", i+1, n+2*i+1, n+2*i+2);
        }
        printf("\n");
    }
}
