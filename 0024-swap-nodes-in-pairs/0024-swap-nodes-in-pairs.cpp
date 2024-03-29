/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // ListNode* t=new ListNode(2);
        
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return head;
        ListNode* temp= head;
        while(temp!=NULL)
        {
            // head->next=temp->next;
            // temp->next=head;
            if(temp->next==NULL)
                break;
            swap(temp->val,temp->next->val);
            temp=temp->next->next;
            
            
        }
        
    
        return head;
    }
};