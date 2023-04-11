class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (int i = nums.size() - 1; i > -1; i --)
            if (nums[i] == val)
                nums.erase(nums.begin() + i);
        return nums.size();
    }
};
