class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int winner = nums[0];
        int count = 1;
        for (int i = 1; i < nums.size(); i ++)
        {
            if (nums[i] == winner) count ++;
            else if (count == 1)winner = nums[i];
            else count --;
        }
        return winner;
    }
};
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int candidate = -1;
//         int count = 0;
//         for (int num : nums) {
//             if (num == candidate)
//                 ++count;
//             else if (--count < 0) {
//                 candidate = num;
//                 count = 1;
//             }
//         }
//         return candidate;
//     }
// };
