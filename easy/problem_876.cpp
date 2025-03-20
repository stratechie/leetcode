class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* middle = head;
        ListNode* end = head;

        while (end && end->next)
        {
            middle = middle->next;
            end = end->next->next;
        }

        return middle;
    }
};