class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mx=-1;
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