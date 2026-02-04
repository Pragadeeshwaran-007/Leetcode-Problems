class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<list<int>>addEdge(numCourses);
        vector<int>indegree(numCourses, 0);
        queue<int>q;
        vector<int>ans;

        for(int i=0; i<prerequisites.size(); i++){
            int u = prerequisites[i][1];
            int v = prerequisites[i][0];
            addEdge[u].push_back(v);
            indegree[v]++;
        }

        for(int i=0; i<numCourses; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int node = q.front();
            ans.push_back(node);
            q.pop();

            for(auto nbr:addEdge[node]){
                indegree[nbr]--;
                if(indegree[nbr] == 0){
                    q.push(nbr);
                }
            }
        }
        if(ans.size() != numCourses)return {};
        else return ans;
    }
};
