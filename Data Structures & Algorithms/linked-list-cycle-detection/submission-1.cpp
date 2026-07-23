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
        int count=0;
        if (head == nullptr) return false;
        while(head && count<=1000){
            count++;
            if(head) head=head->next;
            else {
                return false;
            }
            if (head == nullptr) return false;
        }
        return true;
    }
};
