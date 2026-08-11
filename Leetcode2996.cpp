class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int ans = nums[0];
        int i = 1;
        while(i < nums.size() && nums[i] == nums[i-1] + 1){
            ans+=nums[i];
            i++;
        }
        
        while (find(nums.begin(), nums.end(), ans) != nums.end()) {
            ans++;
        }
        return ans;
        
    }
};
