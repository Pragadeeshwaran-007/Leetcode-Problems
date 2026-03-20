class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<vector<int>> ans;

        for(int x : nums){
            int freq = ++mp[x];

            if(freq > ans.size()){
                ans.push_back({});
            }

            ans[freq - 1].push_back(x);
        }

        return ans;
    }
};
