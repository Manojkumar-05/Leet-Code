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
    ListNode* revLL(ListNode* prev, ListNode* curr, ListNode* next){
        if(!next) {
            curr->next = prev;
            return curr;
        }
        curr->next = prev;
        return revLL(curr, next, next->next);
    }
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        return revLL(NULL, head, head->next);
    }
};