class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int res = 0;
        for (auto n: nums)
            res ^= n;
        int one = 1;
        while ((one & res) == 0)// 随意找一个所求两数按位异或不同的位置的1
            one <<= 1;
        int a = 0, b = 0;
        for (auto n: nums)
            if (n & one)
                a ^= n;
            else b ^= n;
        return {a, b};
    }
};
