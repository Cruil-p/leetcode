class Solution {
public:
    int a[10010];
    int h[40010], e[40010], ne[40010], idx;
    void add(int aa, int b)
    {
        e[idx] = b, ne[idx] = h[aa], h[aa] = idx ++;
    }
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        memset(h, -1, sizeof h);
        for (int i = 0; i < paths.size(); i ++)
        {
            int aa = paths[i][0], b = paths[i][1];
            add(aa, b), add(b, aa);
        }
        vector<int> v;
        for (int i = 1; i <= n; i ++ )
        {
            bool flag[5] = {0, 0, 0, 0, 0};
            for (int j = h[i]; ~j; j = ne[j])
            {
                int k = e[j];
                flag[a[k]] = 1;
            }
            for (int ii = 1; ii <= 4; ii ++)
                if (!flag[ii])
                {
                    a[i] = ii;
                    break;
                }
        }
        for (int i = 1; i <= n; i ++)v.push_back(a[i]);
        
        return v;
    }
};
