class Solution {
public:
    int a[10010];
    int b[2];
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for (int i = 0; i < nums.size(); i ++)
            a[i] = nums[i];
        int n = nums.size();
        sort(a, a + n);
        for (int i = 0, j = n - 1; i < j;)
        {
            if (a[i] + a[j] == target)
            {
                b[0] = a[i];
                b[1] = a[j];
                break;
            }
            else if (a[i] + a[j] < target)i ++;
            else j --;
        }
        for (int i = 0; i < n; i ++)
            if (b[0] == nums[i] || b[1] == nums[i])v.push_back(i);
        return v;
    }
};
