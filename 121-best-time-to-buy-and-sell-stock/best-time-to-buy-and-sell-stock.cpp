class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int mx=0;
        int min=nums[0];
        for(int i=1;i<nums.size();i++){
            if(min>=nums[i]){
                min=nums[i];
            }
            else{
                mx=max(mx,nums[i]-min);
            }
        }
        return mx;
    }
};