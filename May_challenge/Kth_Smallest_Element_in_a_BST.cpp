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
    
    // int k;
    
    void inorder(TreeNode* root, vector<int>& v,int& ans,int  k){
        
        if (!root){return;}
        

        
        


        
        
        inorder(root->left, v, ans, k);
        v.push_back(root->val);
        if (v.size() ==k){
            cout<<v[0];
            ans = v[k-1];
            return;
        }
        inorder(root->right,v,ans,k);
        
    }
    
    
    
    int kthSmallest(TreeNode* root, int k) {
        int ans = -1;
        vector<int> v;
        inorder(root,v,ans,k);
        return ans;
        
            
    }
};
