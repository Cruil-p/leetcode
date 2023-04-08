class Solution {
public:
    bool isUgly(int n) {
        int a[] = {2, 3, 5};
        for (int i = 0; i < 3 & n >= 2; i ++)
            while (n % a[i] == 0)
                n /= a[i];
        return n == 1;
    }
};
