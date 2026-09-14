#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) cin >> grid[i];
    
    vector<int> rows, cols;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (grid[i][j] == '*'){
                rows.push_back(i+1);
                cols.push_back(j+1);
            }
        }
    }
    
    int r, c;
    // row that appears once
    if (rows[0] == rows[1]) r = rows[2];
    else if (rows[0] == rows[2]) r = rows[1];
    else r = rows[0];
    
    if (cols[0] == cols[1]) c = cols[2];
    else if (cols[0] == cols[2]) c = cols[1];
    else c = cols[0];
    
    cout << r << " " << c << endl;
    
    return 0;
}
