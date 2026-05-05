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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){
            return NULL;
        }
        ListNode* l = head;
        ListNode* r = head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        int ct = 1;
        while(ct < n){
            r = r->next;
            ct++;
        }
        while(r->next != NULL){
            r = r->next;
            l = l->next;
            prev = prev->next;
        }
        prev->next = l->next;
        l->next = NULL;
        return dummy->next;
    }
};
