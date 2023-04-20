class Solution {
public:
    int a[110];
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i ++)a[nums[i]] ++;
        int ans = 0;
        for (int i = 0; i <= 100; i ++)
            ans += (a[i] == 1 ? i : 0);
        return ans;
    }
};
