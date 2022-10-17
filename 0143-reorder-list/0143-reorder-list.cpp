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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL) return;
        stack<ListNode*> st;
        
        ListNode* ptr=head;
        int size=0;
        while(ptr!=NULL) {
            st.push(ptr);
            size++;
            ptr=ptr->next;
        }
        
        ListNode* pptr=head;
        for(int i=0;i<size/2;i++) {
            ListNode* temp=st.top();
            st.pop();
            
            temp->next=pptr->next;
            pptr->next=temp;
            
            
            pptr=pptr->next->next;
            
        }
        pptr->next=NULL;
        // return head;
        
    }
};