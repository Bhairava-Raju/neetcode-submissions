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
        if(head == NULL) return NULL;
        ListNode* temp = new ListNode(0);
        temp->next = head;
        ListNode* dummy = temp;
        int i = 0;
        while(i<left-1){
            temp = temp->next;
            i++;
        }
        ListNode* left_before = temp;
        ListNode* leftp = left_before->next;
        while(i < right){
            temp = temp->next;
            i++;
        }
        ListNode* rightp = temp;
        ListNode* right_next = rightp->next;
        ListNode* prev = NULL;
        ListNode* curr = leftp;
        ListNode* adv = NULL;
        while(curr != NULL && curr != right_next){
            adv = curr->next;
            curr->next = prev;
            prev = curr;
            curr = adv;
        }
        left_before->next = rightp;
        leftp->next = right_next;
        return dummy->next;
    }
};