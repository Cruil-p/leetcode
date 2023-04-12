class Solution {
public:
    int longestDecomposition(string text) {
        int ans = 0;
        int r = text.length() - 1;
        int len = 0;
        int j = r;
        for (int i = 0; i < (text.length() + 1) / 2 && i <= j; i ++ )
        {
            if (j < i)break;
            while (j >= i && text[j] != text[i])j --;
            if (j == i){
                ans ++;
                break;
            }
            bool flag = false;
            for (int k = 0; k < r - j + 1; k ++)
                if (text[i + k] != text[j + k])
                    flag = true;
            if (flag)
            {
                i --;
                j --;
            }
            else 
            {
                ans += 2;
                i += r - j;
                r -= r - j + 1;
                j = r;
            }
        }
        return ans;
    }
};
