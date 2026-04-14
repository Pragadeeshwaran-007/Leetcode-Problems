class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());
        return (s[0] + s[1] - 2 * '0') * 10 
             + (s[2] + s[3] - 2 * '0');
    }
};
