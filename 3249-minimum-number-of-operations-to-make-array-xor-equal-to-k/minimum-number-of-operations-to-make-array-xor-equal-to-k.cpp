class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xorr=0;
        for(auto num:nums){
            xorr^=num;
        }
        int count=0;
        while(xorr || k){
            if((xorr&1) != (k&1)){
                count++;
            }
            xorr>>=1;
            k>>=1;
        }

        return count;
    }
};