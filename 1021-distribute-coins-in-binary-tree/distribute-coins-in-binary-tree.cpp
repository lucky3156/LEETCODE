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
        int sol=func(root);
        return res;
    }
    int func(TreeNode* node){
        if(!node){
            return 0;
        }
        int left=func(node->left);
        int right=func(node->right);
        res+=abs(left)+abs(right);
        return node->val - 1 + left + right;
    }
};