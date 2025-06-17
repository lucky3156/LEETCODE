class Solution {
public:
    int search(vector<int>& nums, int target) {
        int sol=-1;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                sol=mid;
                break;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return sol;
    }
};