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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
    int start = 0;
     return   helper(start,0,inorder.size()-1,preorder, inorder);
        
        
    }

public:
    TreeNode* helper(int& pre_index,int inorder_start, int inorder_end,vector<int>&preorder,vector<int>&inorder){
        
        if (inorder_start>inorder_end || pre_index>=preorder.size()){return NULL;}
        
        // cout<<"pre_index as func starts  "<<pre_index<<" ";
        
       TreeNode* root = new TreeNode(preorder[pre_index]);
       pre_index = pre_index+1;
        


        // cout<<"inorder_start"<<inorder_start;
        int root_find = 0;
        for(int i = inorder_start;i<=inorder_end;++i){
            if (inorder[i]==root->val){
                root_find = i;
        // cout<<"pre_index_inside_left  "<<pre_index<<" ";
                break;

            }

        }
        root->left =  helper(pre_index,inorder_start,root_find-1, preorder, inorder);
        // cout<<"pre_index_after_left  "<<pre_index<<" ";
        root->right =  helper(pre_index,root_find+1,inorder_end, preorder, inorder);


        

        return root;
        
    }
    

};



