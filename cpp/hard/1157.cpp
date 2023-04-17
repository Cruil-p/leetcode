class MajorityChecker {
public:
    MajorityChecker(vector<int>& arr): arr(arr) {
        for (int i = 0; i < arr.size(); i ++)
            loc[arr[i]].push_back(i);
    }
    
    int query(int left, int right, int threshold) {
        int len = right - left + 1;
        uniform_int_distribution<int> dis(left, right);
        for (int i = 0; i < k; i ++)
        {
            int x = arr[dis(gen)];
            vector<int>& v = loc[x];
            int occ = upper_bound(v.begin(), v.end(), right) - lower_bound(v.begin(), v.end(), left);
            if (occ >= threshold) return x;
            else if (occ * 2 > len)return -1;
        }
        return -1;
    }
private:
    static const int k = 25;
    mt19937 gen{random_device{}()};
    const vector<int>& arr;
    unordered_map<int, vector<int>> loc;
};

/**
 * Your MajorityChecker object will be instantiated and called as such:
 * MajorityChecker* obj = new MajorityChecker(arr);
 * int param_1 = obj->query(left,right,threshold);
 */
