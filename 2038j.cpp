#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    long long w = 0;
    for(int i=0;i<n;i++){
        char c;
        long long x;
        scanf(" %c %lld", &c, &x);
        if(c=='P'){
            w += x;
        } else {
            if(w <= x-1){
                printf("YES\n");
                w = 0;
            } else {
                printf("NO\n");
                w -= x;
            }
        }
    }
    return 0;
}
