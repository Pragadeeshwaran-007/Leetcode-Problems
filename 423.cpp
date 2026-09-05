class Solution { //Please upvote if it helps :)
public:
    string originalDigits(string s) {
        vector<int> count(10);
        for(auto &ch : s){
            if(ch == 'z') count[0]++;
            if(ch == 'o') count[1]++;
            if(ch == 'w') count[2]++;
            if(ch == 'h') count[3]++;
            if(ch == 'u') count[4]++;
            if(ch == 'f') count[5]++;
            if(ch == 'x') count[6]++;
            if(ch == 's') count[7]++;
            if(ch == 'g') count[8]++;
            if(ch == 'i') count[9]++;
        }
        count[1] = count[1] - count[2] - count[4] - count[0];
        count[3] = count[3] - count[8];
        count[5] = count[5] - count[4];
        count[7] = count[7] - count[6];
        count[9] = count[9] - count[5] - count[6] - count[8];
        
        string ans = "";
        for(int i = 0; i < 10; i++){
            while(count[i] > 0){
                ans += to_string(i);
                count[i]--;
            }
        }
        return ans;
    }
};
