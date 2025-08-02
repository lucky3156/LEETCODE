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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return func(inorder,postorder,0,inorder.size()-1);
    }
    TreeNode* func(vector<int>& inorder, vector<int>& postorder,int l,int r){
        if(l>r) return nullptr;
        
        TreeNode* node = new TreeNode(postorder[postorder.size()-(indx++)-1]);
        
        int mid=mp[node->val];
        
        node->right=func(inorder,postorder,mid+1,r);
        node->left=func(inorder,postorder,l,mid-1);
        
        return node;
    }
};