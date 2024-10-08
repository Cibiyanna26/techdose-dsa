class Solution
{
public:
    int N = 1e9 + 7;
    bool isPrime(int num)
    {
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    long long int factorial(int num)
    {
        long long int res = 1;
        for (int i = 2; i <= num; i++)
        {
            res = (res * i) % N;
        }
        return res;
    }
    int numPrimeArrangements(int n)
    {
        vector<int> v(n + 1, true);
        v[0] = false;
        v[1] = false;
        long long int count = 0;
        for (int i = 2; i * i <= n; i++)
        {
            if (v[i])
            {
                for (int j = i * i; j <= n; j += i)
                {
                    v[j] = false;
                }
            }
        }
        for (auto x : v)
        {
            if (x == true)
            {
                count++;
            }
        }
        long long int compositeNumber = n - count;
        return (factorial(count) * factorial(compositeNumber)) % N;
    }
};