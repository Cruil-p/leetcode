class Solution {
public:
    int f[210];
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        for (int i = n; i >= 1; i --)
            for (int j = 1; j <= i; j ++)
                f[j] = min(f[j + 1], f[j]) + triangle[i - 1][j - 1];
        return f[1];
    }
};
