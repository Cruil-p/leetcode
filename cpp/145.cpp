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
    void lastorder(TreeNode* root, vector<int>& num){
        if (!root)return;
        lastorder(root->left, num);
        lastorder(root->right, num);
        num.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> num;
        lastorder(root, num);
        return num;
    }
};
