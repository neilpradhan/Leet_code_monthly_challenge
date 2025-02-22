/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void helper(Node* root,Node* next ){
        if (!root){return;}
        
        root->next = next;
        helper(root->left,root->right);
        helper(root->right, next != NULL ? next->left : NULL);

    }
    
    
    
    Node* connect(Node* root){
        Node* curr = root;
        helper(curr,NULL);
        return root;
        
    }
};
