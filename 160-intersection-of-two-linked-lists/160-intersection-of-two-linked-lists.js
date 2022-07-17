/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} headA
 * @param {ListNode} headB
 * @return {ListNode}
 */
var getIntersectionNode = function(headA, headB) {
    let countA=0
    let countB=0;
    let hA=headA;
    let hB=headB;
    while(hA!=null) {
        countA+=1;
        hA=hA.next;
    }
    while(hB!=null) {
        countB+=1;
        hB=hB.next;
    }
    
    uncommonNodes= Math.abs(countA-countB)
    
    if(countA>countB) {
        for(var i=0;i<uncommonNodes;i++) {
            headA=headA.next;
        }
        
    }
    else if(countB>countA) {
        for(var i=0;i<uncommonNodes;i++) {
            headB=headB.next;
        }
    }
    while(headA!=null && headB!=null) {
        if(headA==headB) {
            return headA;
        }
        else {
            headA=headA.next;
            headB=headB.next;
        }
    }
    return null;
};