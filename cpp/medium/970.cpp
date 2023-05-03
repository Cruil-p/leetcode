class Solution {
public:
    int a[30], b[30];
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int> v;
        if (bound <= 1)return {};
        if (x == 1 && y == 1)return {2};
        if (x == 1)swap(x, y);
        for (int i = 0; pow(x, i) <= bound; i ++)
            a[i] = pow(x, i);
        if (y == 1)b[0] = 1;
        else {
            for (int i = 0; pow(y, i) <= bound; i ++)
                b[i] = pow(y, i);
        }
        set<int> s;
        for (int i = 0; a[i] > 0; i ++)
            for (int j = 0; b[j] > 0; j ++)
                s.insert(a[i] + b[j]);
        for (auto c: s)
            if (c <= bound)
                v.push_back(c);
        return v;
    }
};
