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
    void inord(TreeNode* node,vector<int> &sol){
        if(!node){
            return ;
        }
        inord(node->left,sol);
        sol.push_back(node->val);
        inord(node->right,sol);
        

    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> sol;
        inord(root,sol);
        return sol[k-1];
    }
};