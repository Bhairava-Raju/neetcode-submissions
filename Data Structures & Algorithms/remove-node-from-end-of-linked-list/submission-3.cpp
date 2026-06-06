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
        ListNode* prev = new ListNode(0);
        prev->next = head;
        ListNode* forw = prev;
        ListNode* back = prev;
        int ct = 0;
        while(ct <= n){
            forw = forw->next;
            ct++;
        }
        while(forw != NULL){
            forw = forw->next;
            back = back->next;
        }
        ListNode* del = back->next;
        back->next = back->next->next;
        delete del;
        return prev->next;
    }
};
