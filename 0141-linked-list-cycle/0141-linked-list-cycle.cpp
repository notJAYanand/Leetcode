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
       /* unordered_set<ListNode*> ll;
        while(head!=NULL)
        {
            if(ll.find(head)!=ll.end())
                return true;
            
            ll.insert(head);
            head=head->next;
        }*/
        
        //100000+1
        
        // while(head)
        // {
        //     if(head->val==100001)
        //     {
        //         return true;
        //     }
        //     head->val=100001;
        //     head=head->next;
        // }
        // return false;
        
        ListNode* fast=head;
        ListNode* slow=head;
        
        while(fast!=NULL && fast->next!=NULL) {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow) return true;
        }
        return false;
    }
};