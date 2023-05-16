class Solution {
public:
    bool check(string s, string t)
    {
        for (int i = 0; i < 5; i ++)
            if (t[i] != '?' && t[i] != s[i])
                return false;
        return true;
    }
    int countTime(string time) {
        int ans = 0;
        for (int i = 0; i < 24; i ++)
            for (int j = 0; j < 60; j ++)
            {
                string s = "";
                s += i / 10 + '0';
                s += i % 10 + '0';
                s += ':';
                s += j / 10 + '0';
                s += j % 10 + '0';
                if (check(s, time))
                    ans ++;
            }    
        return ans;
    }
};
