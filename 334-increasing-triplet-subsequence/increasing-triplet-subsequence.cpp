class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int s1=INT_MAX;
        int s2=INT_MAX;
        for(int i:nums){
            if(i>s2){
                return true;
            }
            if(i<=s1){
                s1=i;
            }
            else{
                s2=i;
            }
        }
        return false;
    }
};