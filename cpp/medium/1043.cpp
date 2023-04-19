class Solution {
public:
    int f[550];
    int a[550];
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        for (int i = 1; i <= n; i ++)
            a[i] = arr[i - 1];
        for (int i = 1; i <= n; i ++)
        {
            int maxValue = a[i];
            for (int j = i; j >= 1 && j >= i - k + 1; j --)
            {
                maxValue = max(maxValue, a[j]);
                f[i] = max(f[i], f[j - 1] + (i - j + 1) * maxValue);
            }
        }
        return f[n];
    }
};
