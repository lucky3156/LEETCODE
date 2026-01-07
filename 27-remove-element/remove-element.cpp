class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int curr : nums){
            if(curr != val){
                nums[k++]=curr;
            }
        }
        return k;
    }
};