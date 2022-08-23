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
//     bool palindrome(string s)
//     {
//         if(s.length()==1||s.length()==0)
//             return true;
//         if(s[0]==s[s.length()-1])
//         {
//             return palindrome(s.substr(1,s.length()-2));
                              
//         }
//         return false;
//     }
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* start=head;
        while(start!=NULL)
        {
            s.push(start->val);
            start=start->next;
        }
        while(head!=NULL && !s.empty())
        {
            if(head->val==s.top())
            {
                s.pop();
                head=head->next;
            }
            else
            {
                return false;
            }
            
        }
        return true;

//         string s="";
//         int i=0;
//         while(head!=NULL)
//         {
//             s[i]+=head->val;
//             head=head->next;
//             i++;
//         }
        
        
        
//         if(palindrome(s))
//             return true;
//         return false;
//         if(head==NULL)
//         {
//             return true;
//         }
//         ListNode* tail= *head;
//         while(tail->next!=NULL)
//         {
//             tail=tail->next;
//         }
        
//         while(head!=tail)
//         {
//             if(head->val==tail->val)
//             {
//                 return true;
//             }
//             head=head->next;
            
//         }
    }
};