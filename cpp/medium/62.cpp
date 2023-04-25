class Solution {
public:
    int a[110][110];
    int uniquePaths(int m, int n) {
        a[1][1] = 1;
        for (int i = 1; i <= m; i ++)
            for (int j = 1; j <= n; j ++)
                if (i == 1 && j != 1)a[i][j] += a[i][j - 1];
                else if (j == 1 && i != 1)a[i][j] += a[i - 1][j];
                else a[i][j] += a[i - 1][j] + a[i][j - 1];
        return a[m][n];
    }
};
