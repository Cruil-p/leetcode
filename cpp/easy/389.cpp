class Solution {
public:
    int a[26], b[26];
    char findTheDifference(string s, string t) {
        for (int i = 0; i < s.length(); i ++)
            a[s[i] - 'a'] ++;
        for (int i = 0; i < t.length(); i ++)
            b[t[i] - 'a'] ++;
        char r;
        for (int i = 0; i < 26; i ++)
            if (a[i] != b[i])
                r = i + 'a';
        return r; 
    }
};
