class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> counter(n + 1);
        counter[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            counter[i] = (i & 1) + (counter[i / 2]);
        }
        return counter;
    }
};