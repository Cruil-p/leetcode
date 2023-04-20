class Solution {
public:
    unsigned long long int c[210][210];
    int uniquePaths(int m, int n) {
        int l = n + m - 2;
        int r = min(m, n) - 1;
        for (int i = 0; i <= 200; i ++)c[i][0] = 1;
        for (int i = 1; i <= 200; i ++)
            for (int j = 1; j <= i; j ++)
                if (i == j)c[i][j] = 1;
                else c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
        return c[l][r];
    }
};
