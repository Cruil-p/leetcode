class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (int i = nums.size() - 1; i > -1; i --)
        {
            int j = i;
            while (j > -1 && nums[j] == nums[i])j --;
            nums.erase(nums.begin() + j + 1, nums.begin() + i);
            i = j + 1;
        }
        return nums.size();
    }
};
