class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int>mp;
        for(int s:nums){
            mp[s]++;
        }
        for(auto val:mp){
            if(val.second>1){
                return val.first;
            }
        }
        return 0;
    }
};
