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
    void inord(TreeNode* root,vector<int> &res){
        if(!root){
            return;
        }
        inord(root->left,res);
        res.push_back(root->val);
        inord(root->right,res);
    }
    TreeNode* balance(vector<int> &res,int start,int end){
        if(start>end){
            return nullptr;
        }
        int mid=start+((end-start)/2);
        TreeNode* root= new TreeNode(res[mid]);
        root->left=balance(res,start,mid-1);
        root->right=balance(res,mid+1,end);
        return root;
    }
    vector<int> answer(TreeNode* root,int q,vector<int>& res){
        if(!root){
            return res;
        }
        if(root->val==q){
            res[0]=root->val;
            res[1]=root->val;
            return res;
        }
        if(root->val < q){
            res[0]=root->val;
            return answer(root->right,q,res);
        }
        if(root->val > q){
            res[1]=root->val;
            return answer(root->left,q,res);
        }
        return res;

    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
       vector<vector<int>> sol(queries.size(),vector<int>(2,-1));
       vector<int> ini;
       inord(root,ini);
       root=balance(ini,0,ini.size()-1);
       for(int i=0;i<queries.size();i++){
            sol[i]=answer(root,queries[i],sol[i]);
       } 
       return sol;
    }
};