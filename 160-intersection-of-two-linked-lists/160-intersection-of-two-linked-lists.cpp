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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *curA=headA;
        ListNode *curB=headB;
        int countA=0,countB=0;
        while(curA!=NULL){
            ++countA;
            curA=curA->next;
        }
        while(curB!=NULL){
            ++countB;
            curB=curB->next;
        }
        
        int common_no= abs(countA-countB);
        
        if(countA>countB)
        {
         for(int i=0;i<common_no;i++){
             headA=headA->next;
         }   
        }
        else if(countB>countA)
        {
            for(int i=0;i<common_no;i++)
            {
                headB=headB->next;
            }
        }
        while(headA!=NULL && headB!=NULL)
        {
            if(headA==headB)
            {
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};