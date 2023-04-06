class Solution {
public:
    int climbStairs(int n) {
        long long int a = 1, b = 1, c = 1;
        for (int i = 1; i < n; i ++)
        {
            c = a + b; 
            a = b, b = c;
        }
        return c;
    }
};
