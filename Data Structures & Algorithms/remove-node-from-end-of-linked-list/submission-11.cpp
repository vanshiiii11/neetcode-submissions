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
        ListNode*temp=head;
        vector<ListNode*>arr;
        while(temp){
            arr.push_back(temp);
            temp=temp->next;
        }
        int remove=arr.size()-n;
        if(remove==0)return head->next;
        arr[remove-1]->next=arr[remove]->next;
        return head;
    }
};
