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
    bool hasCycle(ListNode* head) {
       map<int, int> m;
       while(true){
        if(head == NULL)
        return false;
        if(head->next == NULL)
        return false;
        m[head->val]++;
        head = head->next;
        if(m[head->val] > 1)
        return true;
       } 
    }
};
