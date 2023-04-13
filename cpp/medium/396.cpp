class Solution {
public:
    long long int s[100010];
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size(); 
        for (int i = 1; i <= n; i ++)
            s[i] = s[i - 1] + nums[i - 1];
        int ans1 = 0, ans = 0;
        for (int i = 0; i < n; i ++)
            ans += i * nums[i];
        ans1 = ans;
        for (int i = 2; i <= n; i ++)
        {
            int k =  ans1 - s[n] + (n) * nums[i - 2];
            ans = max(ans, k);
            ans1 = k;
        }
        return ans;
    }
};
