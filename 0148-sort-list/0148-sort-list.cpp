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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *temp = head;
        vector<int> arr;
        while(temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        sort(arr.begin(), arr.end());
        
        ListNode* H = new ListNode(arr[0]);
        ListNode* ans = H;

        for(int i = 1; i < arr.size(); i++){
            ans->next = new ListNode(arr[i]);
            ans = ans->next;
        }
        return H;
    }
};