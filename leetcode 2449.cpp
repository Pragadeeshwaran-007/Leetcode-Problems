class Solution {
public:
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        sort(nums.begin() , nums.end());
        sort(target.begin() , target.end());
        vector<int> odd1, even1, odd2, even2;
        for(int i = 0, n = nums.size(); i < n; ++i){
            int num1 = nums[i], num2 = target[i];
            if(num1 & 1) odd1.push_back(num1);
            else even1.push_back(num1);
            if(num2 & 1) odd2.push_back(num2);
            else even2.push_back(num2);
        }
        long long res = 0;
        for(int i = 0, m = odd1.size(); i < m; ++i) res += max(0 , odd1[i] - odd2[i]) >> 1;
        for(int i = 0, m = even1.size(); i < m; ++i) res += max(0 , even1[i] - even2[i]) >> 1;
        return res;
    }
};
