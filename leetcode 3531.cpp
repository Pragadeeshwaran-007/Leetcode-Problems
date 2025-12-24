class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        unordered_map<int, vector<int>> dict_x, dict_y;
        for (auto& build : buildings) {
            int x = build[0], y = build[1];
            dict_x[x].push_back(y);
            dict_y[y].push_back(x);
        }
        for (auto& entry : dict_x) {
            sort(entry.second.begin(), entry.second.end());
        }
        for (auto& entry : dict_y) {
            sort(entry.second.begin(), entry.second.end());
        }

        int res = 0;
        for (auto& build : buildings) {
            int x = build[0], y = build[1];
            vector<int>& ox = dict_x[x];
            vector<int>& oy = dict_y[y];
            if (oy[0] < x && oy[oy.size() - 1] > x && ox[0] < y && ox[ox.size() - 1] > y) {
                res++;
            }
        }

        return res;
    }
};
