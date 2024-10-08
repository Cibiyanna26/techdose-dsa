class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int i = 0, j = nums.size() - 1;
        if (nums[i] < nums[j])
            return nums[0];
        while (i < j)
        {
            int mid = (i + j) / 2;
            cout << mid << endl;
            if (nums[mid] < nums[j])
            {
                j = mid;
            }
            else
            {
                i = mid + 1;
            }
        }
        return nums[i];
    }
};