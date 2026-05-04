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
    void reorderList(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *l2 = slow->next;
        ListNode *l1 = head;
        slow->next = NULL;
        ListNode *prev = NULL;
        ListNode *curr = l2;
        while(curr != NULL){
            curr = l2->next;
            l2->next = prev;
            prev = l2;
            l2 = curr;
        }
        ListNode *curr1 = l1->next;
        l2 = prev;  // important: start from reversed head

        while(l2 != NULL){
            ListNode* next1 = l1->next;
            ListNode* next2 = l2->next;

            l1->next = l2;
            l2->next = next1;

            l1 = next1;
            l2 = next2;
        }
    }
};
