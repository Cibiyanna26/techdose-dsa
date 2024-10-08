class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int res = 0;
        for (int i = 0; i < 32; i++)
        {
            int x_right_shift = x >> i; // shifting the given number based on the place like first 10th, 100th, each right we are moving one step left side and we need that last digit so by shifting that amount of time in the right we will be able to get the last digit.
            int y_right_shift = y >> i;
            int left_last = x_right_shift & 1;
            int right_last = y_right_shift & 1;
            if (left_last != right_last)
                res++;
        }
        return res;
    }
};