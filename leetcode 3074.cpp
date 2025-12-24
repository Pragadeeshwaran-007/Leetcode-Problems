#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = apple.size();
        int total = 0;
        int count =0;
        for(int i =0 ; i < n ;i++){
            total += apple[i];
        }
        sort(capacity.begin(), capacity.end(), greater<int>());
        for(int num : capacity){
            total -= num;
            count++;
            if(total <=0) return count;
        }

        return count;

    }
};

int main() {

    Solution s;
    vector<int> apple;
    vector<int> capacity;
    string s1;
    string s2;
    getline(cin , s1);
    getline(cin , s2);
    int x;
    stringstream ss1(s1);
    stringstream ss2(s2);
    while (ss1 >> x) {
        apple.push_back(x);
    }
    while (ss2 >> x) {
        capacity.push_back(x);
    }
    cout << s.minimumBoxes(apple, capacity) << endl;

    return 0;
}
