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
    int rob(TreeNode* root) {
        vector<int> ans = dfs(root);
        return max(ans[0], ans[1]);

    }
    vector<int> dfs(TreeNode* root) {
        if (!root) return {0, 0};

        vector<int> left = dfs(root->left);
        vector<int> right = dfs(root->right);

        int robThis = root->val + left[1] + right[1];
        int skipThis = max(left[0], left[1]) + max(right[0], right[1]);

        return {robThis, skipThis};
    }
};
