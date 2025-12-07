class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums[0];
        vector<int> dp1(n-1);
        vector<int> dp2(n-1);
        
        for(int i = 0 ; i < n-1; i++){
            dp1[i] = nums[i];
            dp2[i] = nums[i+1];
        }

        int first = robHelper(dp1);
        int second = robHelper(dp2);

        return max(first,second);
    }

    int robHelper(vector<int>& nums){
        int n = nums.size();
        if(n < 2) return nums[0];

        vector<int> dp(n);

        dp[0] = nums[0];
        dp[1] = max(dp[0] , nums[1]);

        for(int i = 2 ; i < n ;i++){
            dp[i] = max(dp[i - 2] + nums[i] , dp[i-1]);
        }

        return dp[n-1];
    }
};
