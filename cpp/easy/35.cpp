class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (target <= nums[0]) return 0;
        if (target > nums[nums.size() - 1]) return nums.size();
        int l = 0;
        int r = nums.size() - 1;
        while (l < r)
        {
            int mid = l + r + 1 >> 1;
            if (nums[mid] > target)r = mid - 1;
            else l = mid;
        }
        
        if (nums[l] < target)return l + 1;
        else return l;
    }
};
