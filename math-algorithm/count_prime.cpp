class Solution
{
public:
    int N = 5 * 1e6 + 5;
    bool isprime(int val)
    {
        for (int i = 2; i <= sqrt(val); i++)
        {
            if (val % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    int sieve(int n)
    {
        vector<bool> v(N, true);
        v[0] = v[1] = false;
        int res = 0;
        for (int i = 2; i * i < n; i++)
        {
            if (v[i])
            {
                int times = n / i;
                for (int j = 2; j <= times; j++)
                {
                    v[j * i] = false;
                }
            }
        }
        for (int i = 2; i < n; i++)
        {
            if (v[i])
                res++;
        }
        return res;
    }

    int countPrimes(int n)
    {
        return sieve(n);
    }
};