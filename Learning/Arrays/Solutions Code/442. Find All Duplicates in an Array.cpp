class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> v;
        unordered_map<int, int> myMap;
        for (int i = 0; i < nums.size(); i++)
        {
            myMap[nums[i]]++;
        }
        for (auto x : myMap)
            if (x.second == 2)
            {
                v.push_back(x.first);
            }
        return v;
    }
};