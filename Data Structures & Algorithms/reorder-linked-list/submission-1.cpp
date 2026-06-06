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
        if(head == NULL) return;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* slow = dummy;
        ListNode* fast = dummy;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* second_head = slow->next;
        slow->next = NULL;
        ListNode* prev = NULL;
        ListNode* curr = second_head;
        ListNode* nxt = second_head->next;
        while(curr != NULL){
            curr->next = prev;
            prev = curr;
            curr = nxt;
            nxt = nxt->next;
        }
        ListNode* temp1 = head;
        ListNode* pres = head;
        ListNode* temp2 = prev;
        while(temp2 != NULL){
            temp1 = temp1->next;
            pres->next = temp2;
            pres = temp2;
            temp2 = temp2->next;
            pres->next = temp1;
            pres = temp1;
        }
    }
};
