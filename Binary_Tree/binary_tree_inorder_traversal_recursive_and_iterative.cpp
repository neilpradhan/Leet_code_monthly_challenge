/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
//     void helper(TreeNode* root, vector<int> &v){
//         if (root!=NULL){
//         helper(root->left,v);
//         v.push_back(root->val);
//         helper(root->right,v);
//         }
        
//     }
    
    
    
//     vector<int> inorderTraversal(TreeNode* root) {
            
//         vector<int> v;
        
//        helper(root,v);
//         return v;
        
//     }
    
    
    
    
    
    // iterative soln
    
    
    vector<int> inorderTraversal(TreeNode* root) {
     stack<TreeNode*> s;
     vector<int>v;
     TreeNode* curr = root;
     
        
        while(curr || (!s.empty())){
            if (curr){
                s.push(curr);
                curr = curr->left;
            }
            
            // curr points to null
            else{
            curr = s.top();
            s.pop();
            v.push_back(curr->val);
             curr = curr->right;  
            }

        }
        return v;
        

        
    }

    
    
    
    
};
