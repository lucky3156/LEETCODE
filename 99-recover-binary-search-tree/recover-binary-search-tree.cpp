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
    vector<int> inord;
    void swapper(){
        sort(inord.begin(),inord.end());
    }
    void ino(TreeNode* node){
        if(!node) return;
        ino(node->left);
        inord.push_back(node->val);
        ino(node->right);
    }
    void inori(TreeNode* node,int &index){
        if(!node) return; 
        inori(node->left,index);
        if(node->val!=inord[index]){
            node->val=inord[index];
        }
        index++;
        inori(node->right,index);
    }
    void recoverTree(TreeNode* root) {
        ino(root);
        swapper();
        int index=0;
        inori(root,index);

    }
};