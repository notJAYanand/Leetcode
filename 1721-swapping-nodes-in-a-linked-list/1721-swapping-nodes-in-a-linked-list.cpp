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
    int countNodes(ListNode* head)
    {
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return head;
        }
        ListNode* slow=head;
        ListNode* c= head;
        ListNode* fast=head;
        int t=k;
        int n=countNodes(c);
        for(int i=0;i<k-1;i++)
        {
            slow=slow->next;
        }
        for(int i=0;i<n-k;i++)
        {
            fast=fast->next;
        }
        swap(slow->val,fast->val);
        return head;
    }
};