class Solution {
public:
    int f[210][210];
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        for (int i = 0; i < 210; i ++)f[0][i] = f[i][0] = 110 * 40000;
        for (int i = 1; i <= n; i ++)
            for (int j = 1; j <= m; j ++)
                if (i == 1 && j == 1)f[i][j] = grid[i - 1][j - 1];
                else f[i][j] = min(f[i - 1][j], f[i][j - 1]) + grid[i - 1][j - 1];
        return f[n][m];
    }
};
