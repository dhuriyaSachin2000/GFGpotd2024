class Solution{
    public:
    int solve(int index, int total, vector<int> &cost, vector<vector<int>> &dp)
    {
        if(index == cost.size()) return 0;
        
        if(dp[index][total] != -1) return dp[index][total] ;
        
        int take = 0, not_take = 0;
        
        if(total >= cost[index])
        take = 1 + solve(index+1, total - 0.1*cost[index], cost, dp);
        
        not_take = solve(index+1, total, cost, dp);
        
        return dp[index][total] = max(take, not_take);
    }
    int max_courses(int n, int total, vector<int> &cost)
    {
        vector<vector<int>> dp(n, vector<int> (total+1, -1));
        return solve(0, total, cost, dp);
    }
};