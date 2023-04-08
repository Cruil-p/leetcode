class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> v;
        int t = 1;
        for (int i = digits.size() - 1; i > -1; i -- )
        {
            t += digits[i];
            v.push_back(t % 10);
            t /= 10;
        }
        if (t)v.push_back(t);
        reverse(v.begin(), v.end());
        return v;
    }
};
