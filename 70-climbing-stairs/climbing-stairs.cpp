class Solution {
public:
    int nummy(int n,vector<int> &dp){
        if(n==0){
            return 1;
        }
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int sol=nummy(n-1,dp)+nummy(n-2,dp);
        dp[n]=sol;
        return sol;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        int sol=nummy(n,dp);
        return sol;
    }
};