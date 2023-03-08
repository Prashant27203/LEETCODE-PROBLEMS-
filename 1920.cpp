1920

    // Build Array from Permutation
    class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        int a[nums.size()];
        for (int i = 0; i < nums.size(); i++)
        {
            a[i] = nums[nums[i]];
        }
        vector<int> v;
        for (auto &x : a)
        {
            v.push_back(x);
        }
        return v;
    }
};