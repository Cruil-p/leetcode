class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int l = coordinates[0] - 'a', r = coordinates[1] - '0';
        return (l + r - 1) % 2;
    }
};
