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
    bool check(TreeNode* N1,TreeNode* N2){
        if(!N1 && !N2){
            return true;
        }
        if(!N1 || !N2){
            return false;
        }
        bool parta = N1->val==N2->val;
        bool partb = check(N1->left,N2->right) && check(N1->right,N2->left);
        return parta && partb;
    }
    bool isSymmetric(TreeNode* root) {
        return check(root->left,root->right);
    }
};