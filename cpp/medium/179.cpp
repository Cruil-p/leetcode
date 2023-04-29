class Solution {
public:
    int a[110];
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i ++)a[i] = nums[i];
        sort(a, a + n, [](int x, int y){
            string s1 = to_string(x), s2 = to_string(y);
            return s1 + s2 > s2 + s1;
        });
        if (a[0] == 0)return "0";
        string ans = "";
        for (int i = 0; i < n; i ++)ans += to_string(a[i]);
        return ans;
    }
};
/*
int l = s1.length(), r = s2.length();
            bool flag = false;
            if (l < r){
                string ll = s2.substr(l) + s1;
                flag = ll < s2;
            }
            else if (l > r){
                string ll = s1.substr(r) + s2;
                flag = ll > s2;
            }
            for (int i = 0; i < max(l, r); i ++)
                if (s1[i % l] == s2[i % r])continue;
                else {
                    flag = s1[i % l] > s2[i % r];
                    break;
                }
            if (flag)return true;
            else return false;
*/
