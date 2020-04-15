// #define MAX 100000000000000
#include<bits/stdc++.h>


class MinStack {
    /** initialize your data structure here. */
    // public:
        struct Node{

            Node* next =nullptr;
            int data=0;
        };
    
        Node* head = nullptr ;
        int Min = INT_MAX;
        


    public:
    
     MinStack(){}
    
    

    
    void push(int x) {
        if (x<Min){Min = x;}
        if (head==nullptr){
            head= new Node;
            head->data = x;
            return;
            
        }
        Node* temp = new Node;
        temp->data = x;
        temp->next = head;
        head = temp;
        return;
        
    }
    

    void pop() {
        if(Min == head->data) {
            if(head->next != nullptr) {
                Node* temp = head->next;
                Min = temp->data;
                while(temp->next != nullptr) {
                    temp = temp->next;
                    Min = min(Min,temp->data);
                }
            }
            else {
                Min = INT_MAX;
            }
        }
        head = head->next;
    }
    
    int top() {
        return head->data;
    }
    
    int getMin() {
        return Min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */




// class MinStack {
//     struct Node {
//         int data = NULL;
//         Node *next = nullptr;
//     };
//     Node* Stack = nullptr;
//     int Min = INT_MAX;
// public:
//     /** initialize your data structure here. */
//     MinStack(){}
    
//     void push(int x) {
//         if(x < Min) Min = x;
//         if(Stack == nullptr) {
//             Stack = new Node;
//             Stack->data = x;
//             return;
//         }
//         Node* newNode = new Node;
//         newNode->data = x;
//         newNode->next = Stack;
//         Stack = newNode;
//     }
    
//     void pop() {
//         if(Min == Stack->data) {
//             if(Stack->next != nullptr) {
//                 Node* temp = Stack->next;
//                 Min = temp->data;
//                 while(temp->next != nullptr) {
//                     temp = temp->next;
//                     Min = min(Min,temp->data);
//                 }
//             }
//             else {
//                 Min = INT_MAX;
//             }
//         }
//         Stack = Stack->next;
//     }
    
//     int top() {
//         return Stack->data;
//     }
    
//     int getMin() {
//         return Min;
//     }
// };
