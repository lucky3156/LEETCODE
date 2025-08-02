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
    int func(TreeNode* root,int h){
        if(!root){
            return h;
        }
        int mx=max(func(root->left,h+1),func(root->right,h+1));
        return mx;
    }

    int maxDepth(TreeNode* root) {
       int h=0;
       return func(root,h);
    }
};