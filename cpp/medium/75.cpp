class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int zer = 0;
        for (int i = 0; i < n; i ++)
        {
            sum += nums[i];
            if (nums[i] == 0)zer ++;
        }
        int two = sum - (n - zer);
        int one = sum - two * 2;
        for (int i = 0; i < n; i ++)
            if (i < zer)nums[i] = 0;
            else if (i < zer + one)nums[i] = 1;
            else nums[i] = 2;
    }
};
