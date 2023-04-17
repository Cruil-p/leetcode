class Solution {
public:
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int get(string s)
    {
        int res = 0;
        int mon = (s[0] - '0') * 10 + (s[1] - '0');
        int day = (s[3] - '0') * 10 + (s[4] - '0');
        for (int i = 1; i < mon; i ++)
            res += month[i];
        return res + day;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int l1 = get(arriveAlice), r1 = get(leaveAlice);
        int l2 = get(arriveBob), r2 = get(leaveBob);
        if (r1 < l2 || r2 < l1)return 0;
        else if (l2 >= l1 && r2 <= r1)return r2 - l2 + 1;
        else if (l1 >= l2 && r1 <= r2)return r1 - l1 + 1;
        else return max(0, min(r1 - l2, r2 - l1) + 1);
    }
};
