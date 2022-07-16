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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        //1->2->4
        //1->3->4
        //-1->1-1-2-3-4-4    
            
//         ListNode fake(-1);
//         ListNode *last=&fake;
//         while(l1!=NULL && l2!=NULL)
//         {
//             if(l1->val < l2->val)
//             {
//                 last->next=l1;
//                 last=l1;
//                 l1=l1->next;
//             }
//             else
//             {
//                 last->next=l2;
//                 last=l2;
//                 l2=l2->next;
//             }
            
//         }
//         if(l1!=NULL)
//         {
//             last->next=l1;
//         }
//         if(l2!=NULL)
//         {
//             last->next=l2;
//         }
//        return fake.next; 
        
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        
        if(l1->val<l2->val)
        {
            l1->next= mergeTwoLists(l1->next,l2);
            return l1;
        }
        else 
        {
            l2->next=mergeTwoLists(l1,l2->next);
            return l2;
        }
        
    }
};