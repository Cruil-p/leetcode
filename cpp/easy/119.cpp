class Solution {
public:
    int a[40];
    vector<int> getRow(int rowIndex) {
        a[0] = 1;
        for (int i = 1; i <= rowIndex; i ++)
            for (int j = i; j > 0; j --)
                a[j] = a[j] + a[j - 1];
        vector<int> v;
        // v.push_back(1);
        for (int i = 0; i <= rowIndex; i ++)
            v.push_back(a[i]);
        // if (rowIndex > 1)
            // v.push_back(1);

        return v;
    }
};
