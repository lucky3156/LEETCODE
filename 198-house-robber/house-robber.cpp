class Solution {
public:
    int rec(vector<int>& nums,int index,vector<int> &dp){
        if(index>=nums.size()){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        int pick=nums[index]+rec(nums,index+2,dp);
        int notpick=rec(nums,index+1,dp);
        return dp[index]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return rec(nums,0,dp); 
    }
};