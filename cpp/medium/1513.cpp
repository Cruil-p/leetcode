class Solution {
public:
    int numSub(string s) {
        vector<int> v;
        for (int i = 0; i < s.length(); i ++)
        {
            int j = i;
            while (j < s.length() && s[j] == '1')j ++;
            int s = j - i;
            if (s != 0)v.push_back(s);
            i = j;
        }
        int ans = 0, m = 1e9 + 7;
        for (auto c: v)ans = (ans + (long long)(1 + c) * c / 2) % m;

        return ans;
    }
};
