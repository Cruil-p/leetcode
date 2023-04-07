/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL)return false;
        for (int i = 0; i < 1e4 + 1; i ++)
            if (head->next != NULL)
                head = head->next;
            else break;
        if (head->next == NULL)return false;
        else return true;
    }
};
