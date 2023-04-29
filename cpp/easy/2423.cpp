class Solution {
public:
    int a[27];
    bool check()
    {
        static int b[27];
        memcpy(b, a, sizeof (b));
        sort(b, b + 27);
        for (int i = 26; i > 0; i --)
            if (b[i - 1] != b[i] && b[i - 1])return false;
        return true;
    }
    bool equalFrequency(string word) {
        for (int c: word)
            a[c - 'a' + 1] ++;
        sort(a, a + 27);
        a[26] --;
        if (check())return true;
        a[26] ++;
        for (int i = 0; i < 26; i ++)if (a[i] != 0)
        {
            a[i] --;
            break;
        }
        if (check())return true;

        return false;
    }
};
