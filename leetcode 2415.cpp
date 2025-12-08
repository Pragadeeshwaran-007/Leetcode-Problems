/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 
class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        deque<TreeNode*> dq;
        dq.push_back(root);
        bool odd = false;
        while (!dq.empty()){
            if (odd){
                for (int i = 0; i < dq.size() / 2; i++){
                    swap(dq[i]->val, dq[dq.size()-i-1]->val);
                }
            }
            for (int n = dq.size(); n--;){
                TreeNode* node = dq.front();
                dq.pop_front();
                if (node->left) dq.push_back(node->left);
                if (node->right) dq.push_back(node->right);
            }
            odd = !odd;
        }
        return root;
    }
};
