class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> b;
        for (int t = 0; t < queries.size(); t ++)
        {
            string s = queries[t];
            int i1 = 0, i2 = 0;
            for (; i1 < s.length(); i1 ++)
            {
                int j = i1;
                while (j < s.length() && s[j] <= 'z' && s[j] >= 'a' && s[j] != pattern[i2])j ++;
                if (j == s.length())
                {
                    b.push_back(true);
                    break;
                }
                if ((s[j] >= 'A' && s[j] <= 'Z') && s[j] != pattern[i2])
                {
                    b.push_back(false);
                    break;
                }
                i1 = j; i2 ++;
                if (i2 == pattern.length())
                {
                    j ++;
                    while (j < s.length() && s[j] <= 'z' && s[j] >= 'a')j ++;
                    if (j == s.length())b.push_back(true);
                    else b.push_back(false);
                    break;
                }
            }
            if (i2 < pattern.length())b[t] = false;
        }
        return b;
    }
};
