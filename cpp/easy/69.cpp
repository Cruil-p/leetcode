class Solution {
public:
    int mySqrt(int x) {
        long long int l = -1, r = 200000;
        while (l < r)
        {
            long long int mid = l + r + 1 >> 1;
            if (mid * mid <= x)l = mid;
            else r = mid - 1;
        }
        return l;
    }
};
