class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        for (int i = arr.size() - 2; i >= 0; i --)
            if (arr[i] > arr[i + 1])
            {
                int j = arr.size() - 1;
                while (arr[j] >= arr[i] || arr[j] == arr[j - 1]) j --;
                swap(arr[i], arr[j]);
                break;
            }
        return arr;
    }
};
