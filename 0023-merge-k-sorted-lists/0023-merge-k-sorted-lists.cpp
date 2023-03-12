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
    // void pushb(ListNode* a)
    // {
    //     vector<int> a;
    //     while(a!=NULL)
    //     {
    //         v.push_back(a->val);
    //         a=a->next;
    //     }
    // }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
        for(int i=0 ; i<lists.size();i++)
        {
            while(lists[i] != NULL)
            {
                v.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        sort(v.begin(),v.end());
        
        ListNode* h= new ListNode(0);
        ListNode* temp=h;
        int i=0;
        while(i<v.size())
        {
            h->next= new ListNode(v[i]);
            //h->val=v[i];
            h=h->next;
            i++;
        }
        return temp->next;
    }
};