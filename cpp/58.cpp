class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        for (int i = 0; i < s.length(); i ++ )
        {
            int j = i;
            while (j < s.length() && s[j] != ' ') j ++;
            if (j > i)
                ans = j - i;
            i = j;
        }
        return ans;
    }
};
