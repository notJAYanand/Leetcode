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
    void deleteNode(ListNode* node) {
        if(node==NULL||node->next==NULL){
            return;
        }
        //1->3->4
         //    |      |
        ListNode* key=node->next;
        node->val=node->next->val;
        node->next=node->next->next;
        delete key;
          
    
    }
};