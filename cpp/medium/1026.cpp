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
    int ans = 0;
    int dfs1(TreeNode* node, int x)
    {
        if (node == nullptr)return 1e5 * x;
        int l = dfs1(node->left, x);
        int r = dfs1(node->right, x);
        ans = max(max((node->val - r) * x, (node->val - l) * x), ans);
        if (x  == 1) return min(min(l, r), node->val);
        else return max(max(l, r), node->val);
    }
    int dfs2(TreeNode* node, int x)
    {
        if (node == nullptr)return 1e5 * x;
        int l = dfs2(node->left, x);
        int r = dfs2(node->right, x);
        ans = max(max(ans, l - node->val), r - node->val);
        return max(max(l, r), node->val);
    }
    int maxAncestorDiff(TreeNode* root) {
        dfs1(root, 1);
        dfs1(root, -1);
        return ans;
    }
};
