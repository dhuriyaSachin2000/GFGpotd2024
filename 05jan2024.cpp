class Solution{
    int mod = 1e9 + 7;
    public:
    int TotalWays(int N)
    {
        long long prev1 = 1, prev2 = 1;
        for(int i = 1; i <= N; i++)
        {
            long long curr = (prev1 + prev2) % mod;
            prev2 = prev1;
            prev1 = curr;
        }
        return (prev1 * prev1)  % mod;
    }
    
};