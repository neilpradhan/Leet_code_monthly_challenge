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
    int max_sum = INT_MIN;
    
    int func(TreeNode* curr){
        
        if (!curr){
            return 0;
        }
        int l = max(func(curr->left),0);
        int r = max(func(curr->right),0);
        
        
        max_sum =  max(l+r+curr->val, max_sum);
        return curr->val + max(l,r);
            
    }
    
    
    int maxPathSum(TreeNode* root) {
        // int max_sum = INT_MIN;
        func(root);
        return max_sum;
    }
    
    
    
    
    // int max_sum=INT_MIN;
    // int max_gain(TreeNode* root)
    // {
    //     if(!root)return 0;
    //     int l=max(max_gain(root->left),0);
    //     int r=max(max_gain(root->right),0);
    //     int new_price=root->val+l+r;
    //     max_sum=max(max_sum,new_price);
    //     return root->val+max(l,r);
    // }
    // int maxPathSum(TreeNode* root) {
    //     max_gain(root);
    //     return max_sum;
    // }
};
