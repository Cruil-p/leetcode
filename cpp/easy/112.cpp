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
    bool flag = false;
    int a;
    void dfs(TreeNode* node, int num)
    {
        if(node->left == nullptr && node->right == nullptr)
        {
            if (num + node->val == a)flag = true;
            return ;
        }
        if (node->left != nullptr)dfs(node->left, num + node->val);
        if (node->right != nullptr)dfs(node->right, num + node->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr)return false;
        a = targetSum;
        dfs(root, 0);
        return flag;
    }
};
