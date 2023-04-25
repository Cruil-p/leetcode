class Solution {
public:
    struct Person{
        string name;
        int height;
        bool operator< (const Person& a)const
        {
            return a.height < height;
        }
    }person[1010];
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();
        for (int i = 0; i < n; i ++)
        {
            person[i].name = names[i];
            person[i].height = heights[i];
        }
        sort(person, person + n);
        vector<string> v;
        for (int i = 0; i < n; i ++)v.push_back(person[i].name);

        return v;
    }
};
