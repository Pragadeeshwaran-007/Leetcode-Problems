class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2) return 0;
        sort(nums.begin(), nums.end());
        vector<int> vec;
        for(int i = 0; i < nums.size() - 1; ++i)
        {
            int rem = nums[i + 1] - nums[i];
            vec.push_back(rem);
        }
        sort(vec.rbegin(), vec.rend());
        return vec[0];
    }
};
