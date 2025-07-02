class Solution {
public:
    // int rec(int n,vector<int> &dp){
    //     if(n==0){
    //         return 0;
    //     }
    //     if(n%2==1){
    //         dp[n]=rec(n/2,dp)+1;
    //         return dp[n];
    //     }
    //     else{
    //         dp[n]=rec(n/2,dp);
    //         return dp[n];
    //     }
    // }
    vector<int> countBits(int n) {
        vector<int> dp(n+1,0);
        for(int i=1;i<=n;i++){
            if(i%2==1){
                dp[i]=dp[i/2]+1;
            }
            else{
                dp[i]=dp[i/2];
            }
        }
        return dp;
    }
};