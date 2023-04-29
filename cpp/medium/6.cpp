class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)return s;
        vector<char> v[numRows];
        for (int i = 0; i < s.length(); i ++)
        {
            int m = i % (numRows * 2 - 2);
            if (m < numRows)v[m].push_back(s[i]);
            else v[numRows * 2 - 2 - m].push_back(s[i]);
        }
        string ans = "";
        for (int i = 0; i < numRows; i ++)
            for (int j = 0; j < v[i].size(); j ++)
                ans += v[i][j];
        return ans;
    }
};
