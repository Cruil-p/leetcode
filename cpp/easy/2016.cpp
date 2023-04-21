class Solution {
public:
    int a[1010], b[1010];
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int mi = 1e9 + 1, ma = 0;
        for (int i = 0; i < n; i ++)
        {
            mi = min(mi, nums[i]);
            a[i] = mi;
        }
        for (int i = n - 1; i >= 0; i --)
        {
            ma = max(ma, nums[i]);
            b[i] = ma;
        }
        int ans = 0;
        for (int i = 0; i < n; i ++)ans = max(b[i] - a[i], ans);
        return (ans == 0 ? -1 : ans);
    }
};
