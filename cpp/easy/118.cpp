class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        for (int i = 0; i < numRows; i ++)v[i].resize(i + 1);
        if (numRows >= 1)v[0][0] = 1;
        if (numRows >= 2)v[1][0] = v[1][1] = 1;
        for (int i = 2; i < numRows; i ++)
        {
            v[i][0] = 1;
            for (int j = 0; j < v[i - 1].size() - 1; j ++)
                v[i][j + 1] = v[i - 1][j] + v[i - 1][j + 1];
            v[i][i] = 1;
        }
        return v;
    }
};
