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
    int size(ListNode* head){
        int count = 0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int n = size(head) / 2, count = 0;
        while(head && count < n){
            // ListNode* temp = head;
            head = head->next;
            // delete temp;
            count++;
        }
        return head;
    }
};