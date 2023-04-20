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
    vector<int> v[100010];
    int hh = 0;
    void dfs(TreeNode* node, int h)
    {
        v[h].push_back(node->val);
        hh = max(hh, h);
        if (node->left)dfs(node->left, h + 1);
        if (node->right)dfs(node->right, h + 1);
    }
    bool isEvenOddTree(TreeNode* root) {
        dfs(root, 0);
        bool flag = true;
        for (int i = 0; i <= hh; i ++)
        {
            if (i % 2 == 0)
            {
                if (v[i][0] % 2 == 0){flag = false; break;}
                for (int j = 1; j < v[i].size(); j ++)
                    if (v[i][j] % 2 == 0 || v[i][j] <= v[i][j - 1]){flag = false; break;}
            }
            else 
            {
                if (v[i][0] % 2 == 1){flag = false; break;}
                for (int j = 1; j < v[i].size(); j ++)
                    if (v[i][j] % 2 == 1 || v[i][j] >= v[i][j - 1]){flag = false; break;}
            }
        }
        return flag;
    }
};
