class Solution
{
public:
    bool isprime(int num)
    {
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
                return false;
        }
        return true;
    }
    vector<int> factor(int num)
    {
        vector<int> fac;
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
                fac.push_back(i);
        }
        return fac;
    }

    int distinctPrimeFactors(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (isprime(nums[i]))
            {
                mp[nums[i]]++;
            }
            else
            {
                // vector<int> two;
                vector<int> one = factor(nums[i]);
                for (auto x : one)
                {
                    // cout<<x<<" "<<nums[i]/x;/
                    if (isprime(x))
                    {
                        mp[x]++;
                    }
                    if (isprime(nums[i] / x))
                    {
                        mp[nums[i] / x]++;
                    }
                }
                cout << endl;
            }
        }
        int count = mp.size();
        for (auto x : mp)
        {
            cout << x.first << " ";
        }
        return count;
    }
};