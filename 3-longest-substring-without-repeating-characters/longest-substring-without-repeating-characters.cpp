class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0){
            return 0;
        }
        unordered_map<char,int> mp;
        int currsum=0;
        int maxsum=INT_MIN;
        int left=0,right=0;
        while(right<s.size()){
            if(mp[s[right]]==0){
                mp[s[right]]++;
                currsum++;
                right++;
            }
            else{
                currsum--;
                mp[s[left]]--;
                left++;
            }
            maxsum=max(maxsum,currsum);
        }
        return maxsum;
    }
};