class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        vector<int> sol={-1,-1};
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
       if (low >= nums.size() || nums[low] != target){
                return sol;
            } 
        sol[0]=low;
        high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<=target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        sol[1]=high;
        return sol;
    }
};