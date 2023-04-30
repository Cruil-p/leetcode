class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        int ma = max(max(a, b), c), mi = min(min(a, b), c);
        int me = a + b + c - ma - mi;
        int ans2 = ma - mi - 2;
        int ans1 = ans2;
        int k1 = max(ma - me, me - mi) - 1;
        int k2 = min(ma - me, me - mi) - 1;
        if (k1 == 0)ans1 = 0;
        else if (k1 == 1)ans1 = 1;
        else if (k2 == 1 || k2 == 0)ans1 = 1;
        else ans1 = 2;

        return {ans1, ans2};
    }
};
