class Solution
{
public:
    vector<long long> catalan(int n)
    {
        vector<long long> dp(n + 1);
        dp[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                dp[i] += dp[j] * dp[i - 1 - j];
            }
        }
        return dp;
    }

    int numTrees(int n)
    {
        vector<long long> catalanvec = catalan(n);
        return catalanvec[n];
    }
};