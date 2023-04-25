class Solution {
public:
    string init(string s)
    {
        string ans = "";
        for (int i = 0; i < s.length(); i ++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')ans += s[i];
            if (s[i] >= 'A' && s[i] <= 'Z')ans += s[i] - 'A' + 'a';
            if (s[i] >= '0' && s[i] <= '9')ans += s[i];
        }
        return ans;
    }
    bool check(string s)
    {
        string s2 = s;
        reverse(s.begin(), s.end());
        return s2 == s;
    }
    bool isPalindrome(string s) {
        s = init(s);
        return check(s);
    }
};
