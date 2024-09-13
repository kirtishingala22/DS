class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
          ListNode* first = head;
        ListNode* second = head;

        for (int i = 0; i < n; ++i) {
            first = first->next;
        }

        if (first == nullptr) {
            ListNode* nodeToRemove = head;
            head = head->next;
            delete nodeToRemove;
            return head;
        }

        while (first->next != nullptr) {
            first = first->next;
            second = second->next;
        }

        ListNode* nodeToRemove = second->next;
        second->next = second->next->next;
        delete nodeToRemove;

        return head;
    }
};