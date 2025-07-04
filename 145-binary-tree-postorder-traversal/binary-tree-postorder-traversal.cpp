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
        {
        if(root==nullptr){
            return sol;
        }
        inord(root->left,sol);
        inord(root->right,sol);
        sol.push_back(root->val);
        return sol;
    }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> sol;
        sol=inord(root,sol);
        return sol;
    }
};