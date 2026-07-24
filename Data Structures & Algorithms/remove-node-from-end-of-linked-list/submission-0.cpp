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
        int k=0;
        ListNode* curr=head;
        if(head==nullptr) return nullptr;
        while(curr){
            curr=curr->next;
            k++;
        }
        n=k-n;
        if(n==0){
            ListNode* tmp=head;
            head = head->next;
            delete tmp;
            return head;
        }

        curr= head;

        for(int i=0;i<n-1 && curr != nullptr; i++){
            curr = curr->next;
        }

        ListNode* tmp= curr->next;

        curr->next=tmp->next;
        delete tmp;
        return head;
    }
};
