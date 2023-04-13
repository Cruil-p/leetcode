class Solution {
public:
    int a[100010];
    int mostFrequentEven(vector<int>& nums) {
        int l = 100010, r = 0, ans = -1, num = 0;
        for (int i = 0; i < nums.size(); i ++)
        {
            a[nums[i]] ++;
            l = min(l, nums[i]);
            r = max(r, nums[i]);
        }
        for (int i = l; i <= r; i ++)
            if (i % 2 == 0 && a[i] > num)  
            {
                num = a[i];
                ans = i;
            }
        return ans;
    }
};
