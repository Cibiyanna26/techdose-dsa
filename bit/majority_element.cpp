class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int freq = 0;
        int ele = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (freq == 0)
            {
                ele = nums[i];
                freq++;
                continue;
            }
            if (ele == nums[i])
                freq++;
            else
                freq--;
        }
        return ele;
    }
};