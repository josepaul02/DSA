/*
Question:
Reverse a singly linked list and return new head
Approach:
using node variables to keep track of prev,current and next nodes and reversing them
*/

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
    ListNode* reverseList(ListNode* head) {
        ListNode* t=head;
        if(head==NULL)
        return NULL;
        ListNode* p=NULL;
        ListNode* f=NULL;
        while(t!=NULL)
        {
            f=t->next;
            t->next=p;
            p=t;
            t=f;
        }
        return p;
    }
};