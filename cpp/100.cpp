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
//  class Solution {
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         if (p == nullptr && q == nullptr) {
//             return true;
//         } else if (p == nullptr || q == nullptr) {
//             return false;
//         } else if (p->val != q->val) {
//             return false;
//         } else {
//             return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//         }
//     }
// };
class Solution {
public:
    bool dfs(TreeNode* node1, TreeNode* node2)
    {
        if (node1 == nullptr && node2 == nullptr)return true;
        else if (node1 == nullptr || node2 == nullptr)return false;
        else if (node1->val != node2->val)return false;
        else return dfs(node1->left, node2->left) && dfs(node1->right, node2->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return dfs(p, q);
    }
};
