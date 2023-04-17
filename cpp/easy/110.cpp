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
    bool flag = true;
    int dfs(TreeNode* root)
    {
        if (root == nullptr)return 0;
        int l = dfs(root->left), r = dfs(root->right);
        if (l == -1 || r == -1 || abs(l - r) > 1)flag = false;
        return max(l, r) + 1;
    }
    bool isBalanced(TreeNode* root) {
        dfs(root);
        return flag;
    }
};
