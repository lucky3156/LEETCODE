class Solution {
public:
    // int upath(int m,int n,vector<vector<int>> &dp){
    //     if(m<0 || n<0){
    //         return 0;
    //     }
    //     if(m==0 && n==0){
    //         return 1;
    //     }
    //     if(dp[m][n]!=-1){
    //         return dp[m][n];
    //     }
    //     return upath(m-1,n,dp)+upath(m,n-1,dp);
    // }
    int uniquePaths(int m, int n) {
        // vector<vector<int>> dp(m,vector<int>(n,-1));
        // return upath(m-1,n-1,dp);
        vector<vector<int>> dp(m,vector<int>(n,0));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(j==0 || i==0){
                    dp[i][j]=1;
                }
                else{
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
            }
        }
        return dp[m-1][n-1];
    }
};