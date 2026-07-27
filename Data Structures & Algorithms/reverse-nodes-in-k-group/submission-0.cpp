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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int grp=0;
        ListNode* temp=head;
        while(temp!=NULL && grp<k){
            temp=temp->next;
            grp++;
        }
        if(grp==k){
            temp=reverseKGroup(temp,k);
            while(grp-- >0){
                ListNode* front=head->next;
                head->next=temp;
                temp=head;
                head=front;
            }
            head=temp;
        }
        return head;
    }
};
