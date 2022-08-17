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
        if(headA==NULL || headB==NULL) return NULL;
        if(headA==headB) return headA;
        
        ListNode* ptr1=headA;
        ListNode* ptr2=headB;
        int countA=0,countB=0;
        
        while(ptr1!=NULL)
        {
            countA++;
            ptr1=ptr1->next;
        }
        while(ptr2!=NULL)
        {
            countB++;
            ptr2=ptr2->next;
        }
        int count=abs(countA-countB);
        cout<<countA<<' '<<countB;
        if(countA>countB)
        {
            while(count)
            {
                count--;
                headA=headA->next;
            }
        }
        else if(countB>countA)
        {
            while(count--)
            {
                headB=headB->next;
            }
        }
        while(headA!=NULL && headB!=NULL)
        {
            if(headA==headB) return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};