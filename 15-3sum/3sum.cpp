class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums){
        vector<vector<int>> sol;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int x=0-nums[i];
            int l=i+1;
            int h=nums.size()-1;
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            while(l<h){
                int sum = nums[i]+nums[l]+nums[h];
                if(sum==0){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[h]);
                    sol.push_back(temp);
                    l++;
                    h--;
                    while(l<h && nums[l]==nums[l-1]){
                        l++;
                    }
                    while(l<h && nums[h]==nums[h+1]){
                        h--;
                    }
                }
                else if(sum<0){
                    l++;
                }
                else{
                    h--;
                }
            }
        }
        return sol;
    }
};