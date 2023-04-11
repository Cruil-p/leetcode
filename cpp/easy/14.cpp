class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int len = 2000;
        for (auto c: strs)
            if (c.size() < len)
                len = c.size();
        char cc;
        bool flag;
        for (int i = 0; i < len; i ++ )
        {
            cc = strs[0][i];
            flag = true;
            for (auto c: strs)
                if (c[i] != cc)
                    flag = false;
            if(flag)s += cc;
            else break;
        }    
        return s;
    }
};
