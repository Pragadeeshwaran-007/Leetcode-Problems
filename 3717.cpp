class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();

        vector<int> rowMax(n, INT_MIN);
        vector<int> colMax(n, INT_MIN);

        // compute row max
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                rowMax[i] = max(rowMax[i], grid[i][j]);
            }
        }

        // compute column max
        for(int j = 0; j < n; j++){
            for(int i = 0; i < n; i++){
                colMax[j] = max(colMax[j], grid[i][j]);
            }
        }

        int ans = 0;

        // calculate total increase
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                ans += min(rowMax[i], colMax[j]) - grid[i][j];
            }
        }

        return ans;
    }
};
