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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
           if (!head || left == right) return head;
    
    ListNode* temp = nullptr;
    ListNode* Left = nullptr;
    ListNode* start = nullptr;
    ListNode* then = nullptr;
    
    ListNode* current = head;
    for (int i = 1; i < left; ++i) {
        temp = current;
        current = current->next;
    }
    
    Left = temp;
    start = current;
    then = start->next;
    
    for (int i = 0; i < right - left; ++i) {
        start->next = then->next;
        then->next = Left ? Left->next : head;
        if (Left) {
            Left->next = then;
        } else {
            head = then;
        }
        then = start->next;
    }
    
    return head;
    }
};