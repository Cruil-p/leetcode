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
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         int m = 1e9 + 7;
//         int k = 0, ans = 0;
//         ListNode* h = head;
//         int n = 0;
//         while (h)
//         {
//             k += h->val + 1;
//             ans = ((long long)ans + n * (h->val + 1) * 10007 % m) % m;
//             n ++;
//             h = h->next;
//         }
//         k = (long long)k * (n - 1) % m * 10007 % m;
//         ans = (long long)ans * 2 % m;
//         return ans == k;
//     }
// };
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string s1 = "", s2 = "";
        while (head)
        {
            s1 += head->val;
            head = head->next;
        }
        s2 = s1;
        reverse(s2.begin(), s2.end());
        return s1 == s2;
    }
};
