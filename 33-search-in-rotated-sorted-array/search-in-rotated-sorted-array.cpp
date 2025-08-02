class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot=0,l=0,r=nums.size()-1;

        while(l<r){
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[r]){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }

        pivot=l;
        l=0;
        r=nums.size()-1;
        if (target >= nums[pivot] && target <= nums[r]) {
            l = pivot;
        } else {
            r = pivot - 1;
        }
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]<target) l=mid+1;
            else r=mid-1;
        }
        return -1;
    }
};