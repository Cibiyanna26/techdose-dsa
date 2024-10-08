class Solution
{
public:
    double solve(double x, int n)
    {
        if (n == 0)
            return 1;
        double half = myPow(x, n / 2);
        double full = half * half;
        if (n % 2 == 1)
        {
            full *= x;
        }
        return full;
    }

    double myPow(double x, int n)
    {
        // if(n==0) return 1;
        // double half = myPow(x, n/2);
        // double full=half*half;
        // if(abs(n)%2 == 1){
        //     full *= x;
        // }
        double ans = solve(x, abs(n));
        return (n >= 0) ? ans : 1 / ans;
    }
};