/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {boolean}
 */
var hasCycle = function(head) {
    if(head==undefined) return false;
    
    while(head) {
        
        if(head.val===100001) {
            return true;
        }
        head.val=100001;
        head=head.next;
    }
    return false;
};