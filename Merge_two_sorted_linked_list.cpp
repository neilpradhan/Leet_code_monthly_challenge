/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
    ListNode* backchod = NULL ;
    
    if (!l1){return l2;}
    if (!l2){return l1;}    
        
    if (l1->val <= l2->val){
        backchod = l1;
        backchod->next = mergeTwoLists(l1->next,l2);
    }else{
        backchod = l2;
        backchod->next = mergeTwoLists(l1,l2->next);
    }

    return backchod;

        
        
        
        
        
    }
};
