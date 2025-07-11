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
    vector<int> inord(TreeNode* root,vector<int> &sol){
        if(root==nullptr){
            return sol;
        }
        inord(root->left,sol);
        sol.push_back(root->val);
        inord(root->right,sol);
        return sol;
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> sol;
        return inord(root,sol);
    }
};