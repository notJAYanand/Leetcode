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
    ListNode *detectCycle(ListNode *head) {

//METHOD 1        
//         unordered_set<ListNode*> ll;
        
//         while(head!=NULL)
//         {
//             if(ll.find(head)!=ll.end())
//             {
//                 return head;
//             }
//             ll.insert(head);
//             head=head->next;
//         }
//         return NULL;

        
//METHOD 2 standard        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                slow=head;
                while(slow!=fast)
                {
                    slow=slow->next;
                    fast=fast->next;
                    
                }
                return fast;

            }            
            
        }
    	return NULL;
    }
    
//         while(head)
//         {
            
//             if(head->val == 100001)
//             {
//                 return head;
//             }
//             head->val= 100001;
//             head=head->next;
//         }
//         return NULL;
//     }
};