/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* func(int l, int r, vector<int>&nums){
        if(l>r){
            return nullptr;
        }
        int mid=l+(r-l)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left=func(l,mid-1,nums);
        node->right=func(mid+1,r,nums);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return func(0,nums.size()-1,nums);
    }
};