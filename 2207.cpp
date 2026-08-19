#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char buf[105];
        scanf("%s", buf);
        string s(buf);

        // collect runs of '1' as (start,end) inclusive, 0-indexed
        vector<pair<int,int>> runs;
        int i = 0;
        while(i < n){
            if(s[i]=='1'){
                int j = i;
                while(j < n && s[j]=='1') j++;
                runs.push_back({i, j-1});
                i = j;
            } else i++;
        }

        long long mn = 0, mx = 0;
        if(!runs.empty()){
            int compStart = runs[0].first;
            int compEnd = runs[0].second;
            for(size_t k = 1; k < runs.size(); k++){
                int gap = runs[k].first - runs[k-1].second - 1;
                if(gap == 1){
                    // mergeable, extend current component
                    compEnd = runs[k].second;
                } else {
                    // finalize current component
                    int M = compEnd - compStart + 1;
                    mn += M/2 + 1;
                    mx += M;
                    compStart = runs[k].first;
                    compEnd = runs[k].second;
                }
            }
            // finalize last component
            int M = compEnd - compStart + 1;
            mn += M/2 + 1;
            mx += M;
        }

        printf("%lld %lld\n", mn, mx);
    }
    return 0;
}
