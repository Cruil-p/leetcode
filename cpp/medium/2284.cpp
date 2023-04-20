class Solution {
public:
    int get(string s)
    {
        int ans = 0;
        for (int i = 0; i < s.length(); i ++)
        {
            int j = i;
            while (j < s.length() && s[j] != ' ') j ++;
            ans ++;
            i = j;
        }
        return ans;
    }
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string, int> m;
        int n = senders.size();
        for (int i = 0; i < n; i ++)
        {
            string s = messages[i];
            m[senders[i]] += get(s);
        }
        string s = "";
        int num = 0;
        for (auto c: m)
        {
            if (c.second > num)
            {
                num = c.second;
                s = c.first;
            } 
            else if (c.second == num && c.first > s)
                s = c.first; 
        }
        return s;
    }
};
