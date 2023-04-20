class Solution {
public:
    string thousandSeparator(int n) {
        string s = to_string(n);
        string ans = "";
        for (int i = s.length() - 1, j = 1; i >= 0; i --, j ++)
        {
            ans = s[i] + ans;
            if (j % 3 == 0 && i > 0)ans = '.' + ans;
        }
        return ans;
    }
};
