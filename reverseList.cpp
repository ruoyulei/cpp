/* Too simple way to reverse a LinkedList */


/* iterative */
class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            ListNode *pre = NULL;
            while (head!=NULL) {
                ListNode *pnex = head->next;
                head->next = pre;
                pre = head;
                head = pnex;
            }
            return pre;
        }
};

/* recursive */

class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            if (head == NULL || head->next == NULL) return head;   // case proof and recursion exit conditon
            ListNode *np = reverseList(head->next);
            head->next->next = head;         // make the next node point back to the node itself
            head->next = NULL;               // destroy the former pointer
            return np;
        }
};
