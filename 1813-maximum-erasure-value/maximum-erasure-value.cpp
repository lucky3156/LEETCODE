class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> mp;
        int currsum=0;
        int maxsum=INT_MIN;
        int left=0,right=0;
        while(right<nums.size()){
            if(mp[nums[right]]==0){
                mp[nums[right]]++;
                currsum+=nums[right];
                right++;
            }
            else{
                currsum-=nums[left];
                mp[nums[left]]--;
                left++;
            }
            maxsum=max(maxsum,currsum);
        }
        return maxsum;
    }
};