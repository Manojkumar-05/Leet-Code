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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head, *prev;
        while(temp && temp->next){
            if(temp->val == temp->next->val){
                prev = temp;
                while(temp && temp->next && temp->val == temp->next->val) temp = temp->next;
                prev->next = temp->next;
            }
            temp = temp->next; 
        }
        return head;
    }
};