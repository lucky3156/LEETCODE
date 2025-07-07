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
    vector<int> inord(TreeNode* node,vector<int> &sol){
        if(!node){
            return sol;
        }
        inord(node->left,sol);
        sol.push_back(node->val);
        inord(node->right,sol);
        return sol;

    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> sol;
        inord(root,sol);
        return sol[k-1];
    }
};