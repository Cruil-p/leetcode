class Solution {
public:
    int a[60];
    int numPairsDivisibleBy60(vector<int>& time) {
        for (auto c: time)
            a[c % 60] ++;
        long long ans = 0;
        ans += ((long long )a[0] * (a[0] - 1) / 2) + ((long long)a[30] * (a[30] - 1) / 2);
        for (int i = 1; i <= 29; i ++)
            ans += ((long long )a[i] * a[60 - i]);
        return ans;
    }
};
