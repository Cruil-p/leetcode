class Solution {
public:
    int a[110][110], f[110][110];
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size(), m = obstacleGrid[0].size();
        for (int i = 0; i < obstacleGrid.size(); i ++)
            for (int j = 0; j < obstacleGrid[i].size(); j ++)
                a[i + 1][j + 1] = obstacleGrid[i][j];
        if (a[1][1] == 1)return 0;
        f[1][1] = 1;
        for (int i = 1; i <= n; i ++)
            for (int j = 1; j <= m; j ++)
                if (a[i][j])f[i][j] = 0;
                else{
                    f[i][j] += f[i - 1][j] + f[i][j - 1];
                }
        return f[n][m];
    }
};
