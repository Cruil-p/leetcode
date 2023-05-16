class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int id, time = 0, all = 0;
        for(auto c: logs)
        {
            int k = c[1] - time;
            if (k > all || (k == all && id > c[0])){
                all = k;
                id = c[0];
            }
            time = c[1];
        }
        return id;
    }
};
