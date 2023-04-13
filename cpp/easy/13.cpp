class Solution {
public:
    int romanToInt(string s) {
        map<char, int> m = {{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100}, {'D', 500},{'M', 1000}};
        int ans = 0;
        for (int i = 0; i < s.length(); i ++)
        {
            int v = m[s[i]];
            if (i < s.length() - 1 && v < m[s[i + 1]])ans -= v;
            else ans += v;
        }
        return ans;
    }
};
// class Solution {
// public:
//     int romanToInt(string s) {
//         map<char, int> m = {{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100}, {'D', 500},{'M', 1000}};
//         int ans = 0;
//         for (int i = 0; i < s.length(); )
//         {
//             int j = i;
//             while (j < s.length() && s[j] == s[i])j ++;
//             int k = (j - i) * m[s[i]];
//             if (m[s[j]] / m[s[i]] == 10 || m[s[j]] / m[s[i]] == 5)
//             {
//                 k = m[s[j]] - k;
//                 j ++;
//             }
//             ans += k;
//             i = j;
//         }
//         return ans;
//     }
// };
