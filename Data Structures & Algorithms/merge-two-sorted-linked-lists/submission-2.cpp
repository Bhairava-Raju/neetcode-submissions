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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL && list2 == NULL) return NULL;
        vector<int> v;
        while(list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                v.push_back(list1->val);
                list1 = list1->next;
            }else{
               v.push_back(list2->val);
                list2 = list2->next; 
            }
        }
        while(list1 != NULL){
            v.push_back(list1->val);
            list1 = list1->next;
        }
        while(list2 != NULL){
            v.push_back(list2->val);
            list2 = list2->next; 
        }
        int n = v.size();
        ListNode* head = new ListNode(v[0]);
        ListNode* mover = head;
        for(int i=1; i<n; i++){
            ListNode* temp = new ListNode(v[i]);
            mover->next = temp;
            mover = mover->next;
        }
        return head;
    }
};
