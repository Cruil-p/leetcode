class Solution {
public:
    char stk[20010];
    int top;
    bool isValid(string s) {
        int n = s.length();
        bool flag = true;
        for (int i = 0; i < n; i ++)
        {
            if (s[i] != 'c')stk[top ++] = s[i];
            if (s[i] == 'c')
            {
                if (top < 2)
                {
                    flag = false;
                    break;
                }
                else if (stk[top - 1] == 'b' && stk[top - 2] == 'a')
                {
                    top -= 2;
                    continue;
                }
                else {
                    flag = false;
                    break;
                }
            }
        }
        if (top == 0)
            return flag;
        else return false;
    }
};
