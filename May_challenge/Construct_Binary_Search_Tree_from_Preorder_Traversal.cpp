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
     TreeNode* helper(vector<int>& preorder, int left, int right){
         
         if (left>right){return NULL;}
         
         
         auto root = new TreeNode(preorder[left]);
         
         int count = left+1;
         
         while(count<=preorder.size()-1 &&preorder[count]<preorder[left]){
             count++;
         }
            
         root->left = helper(preorder,left+1,count-1);
         root->right = helper(preorder,count,right);
         
         return root;
     }
    
    
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int start = 0;
        int end = preorder.size()-1;
        return helper(preorder,start,end);
        
    }
};
