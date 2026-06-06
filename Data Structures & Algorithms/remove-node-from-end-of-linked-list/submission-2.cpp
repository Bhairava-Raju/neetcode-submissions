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
        if(head == NULL || head->next == NULL) return NULL;
        ListNode* forw = head;
        ListNode* back = head;
        ListNode* prev = new ListNode(0);
        prev->next = back;
        int ct = 1;
        while(ct <= n && forw != NULL){
            forw = forw->next;
            ct++;
        }
        while(forw != NULL){
            forw = forw->next;
            back = back->next;
            prev = prev->next;
        }
        prev->next = back->next;
        if(back == head) head = head->next;
        delete back;
        return head;
    }
};
