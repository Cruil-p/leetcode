class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int t[26] = {0};
        for (int i = 0; i < s.length(); i ++)
            if (t[s[i] - 'a'] == 0){
                distance[s[i] - 'a'] += i;
                t[s[i] - 'a'] = 1;
            }
            else if (t[s[i] - 'a'] == 1){
                distance[s[i] - 'a'] -= i - 1;
                t[s[i] - 'a'] = 2;
            }
        for (int i = 0; i < 26; i ++)
            if (t[i] == 2 && distance[i] != 0)
                return false;
        return true;
    }
};
