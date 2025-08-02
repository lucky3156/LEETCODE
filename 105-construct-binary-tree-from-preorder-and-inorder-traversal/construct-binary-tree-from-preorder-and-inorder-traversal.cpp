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
    int indx=0;
    unordered_map<int,int> mp;
    TreeNode* func(vector<int>& preorder, vector<int>& inorder,int l,int r){
        if(l>r) return nullptr;
        TreeNode* node=new TreeNode(preorder[indx++]);
        int mid=mp[node->val];
        node->left=func(preorder,inorder,l,mid-1);
        node->right=func(preorder,inorder,mid+1,r);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return func(preorder,inorder,0,preorder.size()-1);
    }
};