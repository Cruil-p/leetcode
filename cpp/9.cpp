class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        else {
            long long int y = x;
            long long int t = 0;
            while (y)
            {
                t *= 10; 
                t += y % 10;
                y /= 10;
            }
            return t == x;
        }
    }
};
