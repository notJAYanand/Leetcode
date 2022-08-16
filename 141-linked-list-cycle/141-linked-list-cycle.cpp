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
    bool hasCycle(ListNode *head) {
//         ListNode* slow=head;
//         ListNode* fast=head;
        
//         while()
//         {
            
//         }
        if(head==NULL) return false;
        while(head!=NULL && head->next!=NULL)
        {
            head->val=100001;
            head=head->next;
            if(head->val==100001)
            {
                return true;
            }
            
        }
        return false;
    }
};