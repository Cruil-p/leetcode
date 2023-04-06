class Solution {
public:
    string baseNeg2(int n) {
        string s = "";
        for (int i = 1; (n >> i) > 0; i += 2)
            if (n >> i & 1)
                n += (1 << (i + 1));
        while (n)
        {
            s += to_string(n & 1);
            n >>= 1;
        }
        reverse(s.begin(), s.end());
        if (s == "")s = "0";
        return s;
    }
};
