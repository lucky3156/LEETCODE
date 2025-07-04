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
    vector<int> preord(TreeNode* root,vector<int> &sol)
    {
        if(root==nullptr){
            return sol;
        }
        sol.push_back(root->val);
        preord(root->left,sol);
        preord(root->right,sol);
        return sol;
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> sol;
        sol=preord(root,sol);
        return sol;
    }
};