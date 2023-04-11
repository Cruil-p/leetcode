class Solution {
public:
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    bool isRobotBounded(string instructions) {
        int l = 0;
        int x = 0, y = 0;
        for (int i = 0; i < instructions.length(); i ++)
            if (instructions[i] == 'G'){
                x += dx[l];
                y += dy[l];
            }
            else if (instructions[i] == 'L')l = (l - 1 + 4) % 4;
            else l = (l + 1) % 4;
        return l != 0 || (x == 0 && y == 0);
    }
};
