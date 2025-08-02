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
    int res=0;
    int distributeCoins(TreeNode* root) {
        vector<int> vals=func(root);
        return res;
    }
    vector<int> func(TreeNode* node){
        if(!node){
            return {0,0};
        }
        vector<int> left_vals= func(node->left);
        vector<int> right_vals= func(node->right);
        int size=1+left_vals[0]+right_vals[0];
        int coins=node->val + left_vals[1] + right_vals[1];
        res+=abs(size-coins);
        return {size,coins};
    }
};