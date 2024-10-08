class Solution
{
public:
    bool is_palindrome(int a)
    {
        string s = to_string(a);
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool isprime(int n)
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    int primePalindrome(int n)
    {
        if (n == 1 || n == 2)
            return 2;
        while (1)
        {
            if (
                (n > 1e3 && n < 1e4) or
                (n > 1e5 && n < 1e6) or
                (n > 1e7 && n < 1e8))
            {
                n = pow(10, ceil(log10(n)));
                continue;
            }
            if (isprime(n) && is_palindrome(n))
                return n;
            n++;
        }
        return n;
    }
};