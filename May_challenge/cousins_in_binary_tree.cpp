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
    

    
    
    
void helper(TreeNode* node, TreeNode* parent, unordered_map<int,pair<int,TreeNode*>>& m, int depth){
    
        if (!node) {return;}
        m.insert({node->val,{depth,parent}});
        helper(node->left,node,m,depth+1);
        helper(node->right,node,m,depth+1);            
    
    }
    
    
    
    
    
    bool isCousins(TreeNode* root, int x, int y) {
        unordered_map<int,pair<int,TreeNode*>> m;
        helper(root,NULL,m,0);
        if (m.count(x) && m.count(y) && m[x].first == m[y].first && m[x].second != m[y].second){
            return true;
        }
        return false;
            
        
    }
};
