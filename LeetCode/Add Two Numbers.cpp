class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(), *curr = l3; int sum(0);
        while(l1 || l2 || sum) {
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }
            curr->next = new ListNode(sum%10);
            sum /= 10;
            curr = curr->next;
        }
        return l3->next;
    }
};
