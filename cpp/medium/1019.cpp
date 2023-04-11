/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int a[10010];
    int s[10010];
    int t[10010];
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        int n = 0; 
        int top = 0;
        while (head)
        {
            s[n ++] = head->val;
            head = head->next;
        }
        for (int i = 0; i < n; i ++)
        {
            while (top && s[a[top]] < s[i])
            {
                t[a[top --]] = s[i];
            }
            a[++ top] = i;
        }
        for (int i = 0; i < n; i ++)v.push_back(t[i]);
        return v;
    }
};
