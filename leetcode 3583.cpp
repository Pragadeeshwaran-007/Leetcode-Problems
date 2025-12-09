const int M = 100001;
long long freq[M], Prev[M];
const int mod = 1e9+7;

class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        memset(freq, 0, sizeof(freq));
        memset(Prev, 0, sizeof(Prev));

        long long count = 0;

        // process first element
        freq[nums[0]]++;

        // process second element
        int x1 = nums[1];
        if (2*x1 < M) Prev[x1] += freq[2*x1];
        freq[x1]++;

        // process remaining
        for (int i = 2; i < nums.size(); i++) {
            int x = nums[i];

            // if x is even, count valid (i,j,k)
            if ((x & 1) == 0)
                count += Prev[x >> 1];

            // update Prev[x] using freq of 2*x
            if (2*x < M) Prev[x] += freq[2*x];

            // update freq[x]
            freq[x]++;
        }

        return count % mod;
    }
};
