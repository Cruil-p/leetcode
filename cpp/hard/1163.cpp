class Solution {
public:
    string lastSubstring(string s) {
        string ans = "";
        ans += s[0];
        int n = s.length();
        for (int i = 1; i < n; i ++)
        {
            if (s[i] < ans[0])ans += s[i];
            else if (s[i] > ans[0])ans = s[i];
            else {
                int j = 1, j2 = i + 1;
                string tem = "";
                bool flag = true;
                tem += s[i];
                while (j < ans.length() && j2 < n && ans[j] == s[j2] && ans[j] == ans[0])tem += s[j2], j ++, j2 ++;
                while (j < ans.length() && j2 < n && ans[j] == s[j2] && ans[j] < ans[0])tem += s[j2], j ++, j2 ++;
                i = j2 - 1;
                if (j == ans.length() || j2 == n)ans += tem;
                else if (ans[j] < s[j2])ans = tem;
                else ans += tem;
            }
        }
        return ans;
    }
};
