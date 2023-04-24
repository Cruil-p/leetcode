class Solution {
public:
    char stk[10010];
    int idx;
    bool isValid(string s) {
        int n = s.length();
        for (int i = 0; i < n; i ++)
        {
            if (s[i] == '}'){
                if (stk[idx] == '{')idx --;
                else return false;
            }else if (s[i] == ']'){
                if (stk[idx] == '[')idx --;
                else return false;
            }else if (s[i] == ')'){
                if (stk[idx] == '(')idx --;
                else return false;
            }else stk[++ idx] = s[i];
        }
        return idx == 0 ? true : false;
    }
};class Solution {
    public:
            char stk[10010];
                int idx;
                    bool isValid(string s) {
                                int n = s.length();
                                        for (int i = 0; i < n; i ++)
                                                    {
                                                                    if (s[i] == '}'){
                                                                                        if (stk[idx] == '{')idx --;
                                                                                                        else return false;
                                                                                                                    }else if (s[i] == ']'){
                                                                                                                                        if (stk[idx] == '[')idx --;
                                                                                                                                                        else return false;
                                                                                                                                                                    }else if (s[i] == ')'){
                                                                                                                                                                                        if (stk[idx] == '(')idx --;
                                                                                                                                                                                                        else return false;
                                                                                                                                                                                                                    }else stk[++ idx] = s[i];
                                                                            }
                                                return idx == 0 ? true : false;
                                                    }
};class Solution {
    public:
            char stk[10010];
                int idx;
                    bool isValid(string s) {
                                int n = s.length();
                                        for (int i = 0; i < n; i ++)
                                                    {
                                                                    if (s[i] == '}'){
                                                                                        if (stk[idx] == '{')idx --;
                                                                                                        else return false;
                                                                                                                    }else if (s[i] == ']'){
                                                                                                                                        if (stk[idx] == '[')idx --;
                                                                                                                                                        else return false;
                                                                                                                                                                    }else if (s[i] == ')'){
                                                                                                                                                                                        if (stk[idx] == '(')idx --;
                                                                                                                                                                                                        else return false;
                                                                                                                                                                                                                    }else stk[++ idx] = s[i];
                                                                            }
                                                return idx == 0 ? true : false;
                                                    }
};class Solution {
    public:
            char stk[10010];
                int idx;
                    bool isValid(string s) {
                                int n = s.length();
                                        for (int i = 0; i < n; i ++)
                                                    {
                                                                    if (s[i] == '}'){
                                                                                        if (stk[idx] == '{')idx --;
                                                                                                        else return false;
                                                                                                                    }else if (s[i] == ']'){
                                                                                                                                        if (stk[idx] == '[')idx --;
                                                                                                                                                        else return false;
                                                                                                                                                                    }else if (s[i] == ')'){
                                                                                                                                                                                        if (stk[idx] == '(')idx --;
                                                                                                                                                                                                        else return false;
                                                                                                                                                                                                                    }else stk[++ idx] = s[i];
                                                                            }
                                                return idx == 0 ? true : false;
                                                    }
};class Solution {
    public:
            char stk[10010];
                int idx;
                    bool isValid(string s) {
                                int n = s.length();
                                        for (int i = 0; i < n; i ++)
                                                    {
                                                                    if (s[i] == '}'){
                                                                                        if (stk[idx] == '{')idx --;
                                                                                                        else return false;
                                                                                                                    }else if (s[i] == ']'){
                                                                                                                                        if (stk[idx] == '[')idx --;
                                                                                                                                                        else return false;
                                                                                                                                                                    }else if (s[i] == ')'){
                                                                                                                                                                                        if (stk[idx] == '(')idx --;
                                                                                                                                                                                                        else return false;
                                                                                                                                                                                                                    }else stk[++ idx] = s[i];
                                                                            }
                                                return idx == 0 ? true : false;
                                                    }
};class Solution {
    public:
            char stk[10010];
                int idx;
                    bool isValid(string s) {
                                int n = s.length();
                                        for (int i = 0; i < n; i ++)
                                                    {
                                                                    if (s[i] == '}'){
                                                                                        if (stk[idx] == '{')idx --;
                                                                                                        else return false;
                                                                                                                    }else if (s[i] == ']'){
                                                                                                                                        if (stk[idx] == '[')idx --;
                                                                                                                                                        else return false;
                                                                                                                                                                    }else if (s[i] == ')'){
                                                                                                                                                                                        if (stk[idx] == '(')idx --;
                                                                                                                                                                                                        else return false;
                                                                                                                                                                                                                    }else stk[++ idx] = s[i];
                                                                            }
                                                return idx == 0 ? true : false;
                                                    }
};class Solution {
    public:
            char stk[10010];
                int idx;
                    bool isValid(string s) {
                                int n = s.length();
                                        for (int i = 0; i < n; i ++)
                                                    {
                                                                    if (s[i] == '}'){
                                                                                        if (stk[idx] == '{')idx --;
                                                                                                        else return false;
                                                                                                                    }else if (s[i] == ']'){
                                                                                                                                        if (stk[idx] == '[')idx --;
                                                                                                                                                        else return false;
                                                                                                                                                                    }else if (s[i] == ')'){
                                                                                                                                                                                        if (stk[idx] == '(')idx --;
                                                                                                                                                                                                        else return false;
                                                                                                                                                                                                                    }else stk[++ idx] = s[i];
                                                                            }
                                                return idx == 0 ? true : false;
                                                    }
};class Solution {
    public:
            char stk[10010];
                int idx;
                    bool isValid(string s) {
                                int n = s.length();
                                        for (int i = 0; i < n; i ++)
                                                    {
                                                                    if (s[i] == '}'){
                                                                                        if (stk[idx] == '{')idx --;
                                                                                                        else return false;
                                                                                                                    }else if (s[i] == ']'){
                                                                                                                                        if (stk[idx] == '[')idx --;
                                                                                                                                                        else return false;
                                                                                                                                                                    }else if (s[i] == ')'){
                                                                                                                                                                                        if (stk[idx] == '(')idx --;
                                                                                                                                                                                                        else return false;
                                                                                                                                                                                                                    }else stk[++ idx] = s[i];
                                                                            }
                                                return idx == 0 ? true : false;
                                                    }
};class Solution {
    public:
            char stk[10010];
                int idx;
                    bool isValid(string s) {
                                int n = s.length();
                                        for (int i = 0; i < n; i ++)
                                                    {
                                                                    if (s[i] == '}'){
                                                                                        if (stk[idx] == '{')idx --;
                                                                                                        else return false;
                                                                                                                    }else if (s[i] == ']'){
                                                                                                                                        if (stk[idx] == '[')idx --;
                                                                                                                                                        else return false;
                                                                                                                                                                    }else if (s[i] == ')'){
                                                                                                                                                                                        if (stk[idx] == '(')idx --;
                                                                                                                                                                                                        else return false;
                                                                                                                                                                                                                    }else stk[++ idx] = s[i];
                                                                            }
                                                return idx == 0 ? true : false;
                                                    }
};
