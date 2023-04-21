class Solution {
public:
    vector<string> v;
    void dfs(string s, int n)
    {
        if (n == s.length())
        {
            v.push_back(s);
            return;
        }
        if (s[n] >= '0' && s[n] <= '9')dfs(s, n + 1);
        else {
            dfs(s, n + 1);
            s[n] = s[n] - 'a' + 'A';
            dfs(s, n + 1);
            s[n] = s[n] - 'A' + 'a';
        }
    }
    vector<string> letterCasePermutation(string s) {
        string ans = "";
        for (int i = 0; i < s.length(); i ++)
            if (s[i] >= 'A' && s[i] <= 'Z')ans += s[i] - 'A' + 'a';
            else ans += s[i];
        dfs(ans, 0);
        return v;
    }
};
