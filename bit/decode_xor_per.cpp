class Solution
{
public:
    int xor_value(int value, int a)
    {
        if (a == 0)
            return value;
        if (a == 1)
            return 1;
        if (a == 2)
            return value + 1;
        return 0;
    }

    vector<int> decode(vector<int> &encoded)
    {
        int en = encoded.size();
        int de = en + 1;
        int de_xor = xor_value(de, de % 4);
        int rem_xor = 0;
        for (int i = 0; i < en; i += 2)
        {
            rem_xor ^= encoded[i];
        }
        int e = de_xor ^ rem_xor;
        vector<int> res(de);
        res[de - 1] = e;
        for (int i = de - 1; i > 0; i--)
        {
            res[i - 1] = res[i] ^ encoded[i - 1];
        }
        return res;
    }
};