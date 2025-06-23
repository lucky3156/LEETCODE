class Solution {
public:
    int rec(vector<int>& cost ,int i ,vector<int>& dp){
        if(i>=cost.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int left=rec(cost,i+1,dp);
        int right=rec(cost,i+2,dp);
        dp[i]=cost[i]+min(left,right);
        return dp[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(),-1);
        int sol=min(rec(cost,0,dp),rec(cost,1,dp));
        return sol;
    }
};