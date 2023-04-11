class Solution {

public:
bool b[20][20];
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        vector<int> v;
        int d = 1;
        int x = 0, y = 0;
        
        for (int i = 0; i < matrix.size() * matrix[0].size(); i ++ )
        {
            v.push_back(matrix[x][y]);
            b[x][y] = 1;
            x += dx[d], y += dy[d];
            if (x >= matrix.size() || x < 0 || y >= matrix[0].size() || y < 0 || b[x][y])
            {
                x -= dx[d], y -= dy[d];
                d = (d + 1) % 4;
                x += dx[d], y += dy[d];
            }
        }
        return v;
    }
};
