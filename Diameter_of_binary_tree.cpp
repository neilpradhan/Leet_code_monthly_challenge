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
    
    
    int height( TreeNode* node){
        
        
        if (node ==nullptr){return 0;}
        return 1 + max(height(node->left) , height(node->right));
    }
    
    
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        
        
        if (root==nullptr){ return 0;}
        
        int left_height = height(root->left);
        int right_height = height(root->right);
        
        int left_diameter = diameterOfBinaryTree(root->left);
        int right_diameter = diameterOfBinaryTree(root->right);
        
        
        return max (left_height + right_height , max(left_diameter,right_diameter));
        
        
        

    }
};
