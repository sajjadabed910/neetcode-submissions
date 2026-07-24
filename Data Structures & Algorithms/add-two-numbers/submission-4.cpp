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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        int n;
        int h=0;
        while(l1 || l2){
            
            if(l1==nullptr){
                n=l2->val +h;
            }
            else if(l2==nullptr){
                n=l1->val +h;
            }
            else{
                n=l1->val + l2->val +h;
            }
            if(n>=10) {
                h=1;
                n=n%10;
            }
            else h=0;
            if(l1!=nullptr) l1=l1->next;
            if(l2!=nullptr) l2=l2->next;
            tail->next = new ListNode(n);
            tail = tail->next;
            cout<<h<<endl;
        }
        if(h==0){
            return dummy->next;
        }
        else{
            tail->next = new ListNode(h);
            tail = tail->next;
            return dummy->next;
        }
        
    }
};
