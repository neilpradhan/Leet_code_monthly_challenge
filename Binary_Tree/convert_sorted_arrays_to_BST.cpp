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
    private :
        TreeNode* helper(vector<int>& nums, int start, int end){
                
                if (start>end){return NULL;}
                int mid  = (start + end)>>1;
                TreeNode* root =  new TreeNode(nums[mid]);
                root->left = helper(nums,start,mid-1);
                root->right = helper(nums,mid+1,end);
                return root;


        };
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
            if (nums.empty()){return NULL;}
            int start = 0;
            int end  = nums.size()-1;
            return helper(nums,start,end);

    }
};


