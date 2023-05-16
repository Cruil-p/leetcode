class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int t = 1;
        int ans = 1;
        while (ans <= 100010)
        {
            t %= k;
            if (t == 0)break;
            t = t * 10 + 1;
            ans ++;
        }
        return ans == 100011 ? -1 : ans;
    }
};
