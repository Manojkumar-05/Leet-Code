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
    ListNode* mergeTwoLists(ListNode* L1, ListNode* L2) {
        ListNode dummy;
        ListNode *temp = &dummy;
        // if(!L1 && !L2) return NULL;
        // if(!L1) return L2;
        // if(!L2) return L1;

        while(L1 && L2){
            if(L1->val > L2->val){
                temp->next = L2;
                L2 = L2->next;
            }
            else{
                temp->next = L1;
                L1 = L1->next;
            }
        temp = temp->next;
        }
        if(L1) temp->next = L1;
        if(L2) temp->next = L2;
            
        return dummy.next;
    }
};