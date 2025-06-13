class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]=i;
        }
        for(auto it: m){
            cout<<it.first<<" "<<it.second<<endl;
        }
        int to_find;
        vector<int> v;
        for(int i=0;i<arr.size();i++){
            to_find=target-arr[i];
            if(m.find(to_find) != m.end() && m[to_find] !=i){
                v.push_back(i);
                v.push_back(m[to_find]);
                return v;
            }
        }
    return {};
    }
};