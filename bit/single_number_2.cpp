class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int i;
        int res = 0;
        int n = nums.size();
        for (i = 0; i < 32; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                int curr = nums[j];
                if (curr & (1 << i))
                {
                    count++;
                }
            }
            count %= 3;
            res |= count << i;
        }

        return res;
    }
};