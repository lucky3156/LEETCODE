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
    // bool validate(TreeNode* root,int mini,int maxi){
    //     if (!node) return true;
    //     if  (root->val <= mini || root->val >=maxi) return false
    // }
    vector<int> inord(TreeNode* root,vector<int> &sol){
        if(root==nullptr) return sol;
        inord(root->left,sol);
        sol.push_back(root->val);
        inord(root->right,sol);
        return sol;
    }
    bool isValidBST(TreeNode* root) {
        
        // if(root->left->left){
        //     isValidBST(root->left);
        // }
        // if(root->right->right){
        //     isValidBST(root->right);
        // }
        // if(root->val < root->left->val || root->val > root->right->val){
        //     return false;
        // }
        // return true;
        vector<int> sol;
        sol=inord(root,sol);
        for(int i=1;i<sol.size();i++){
           // cout<<sol[i]<<" ";
            if(sol[i]<=sol[i-1]){
                return false;
            }
        }
        return true;

    }
};