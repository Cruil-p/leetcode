class Solution {
public:
    string addBinary(string a, string b) {
        vector<int> m, n;
        string ans = "";
        for (int i = a.length() - 1; i > -1; i --)
            m.push_back(a[i] - '0');
        for (int i = b.length() - 1; i > -1; i --)
            n.push_back(b[i] - '0');
        int t = 0, i = 0;
        for ( ; i < m.size() || i < n.size(); i ++)
        {
            if (i < m.size()) t += m[i];
            if (i < n.size()) t += n[i];
            char c = t % 2 + '0';
            ans += c;
            t /= 2;
        }
        if (t)ans += t + '0';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
