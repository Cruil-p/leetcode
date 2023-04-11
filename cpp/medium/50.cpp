class Solution {
public:
    double myPow(double x, int n) {
        long long int nn = n;
        if (n < 0)
        {
            nn = (long long)n * -1;
            x = 1 / x;
        }
        double k = 1;
        while (nn)
        {
            if (nn & 1)k *= x;
            x = x * x;
            nn >>= 1;
        }
        return k;
    }
};
