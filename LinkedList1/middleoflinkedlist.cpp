
/*
Question:
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.
Approach:
Fast and slow pointers(Hare and tortoise)
hare jumps two nodes at a time while tortoise jumps only one
when hare reaches the end of linked list tortoise would be at half way point.
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
using namespace std;

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* ha=head;
        ListNode* tor=head;
        while(ha!=NULL && ha->next!=NULL){
            tor=tor->next;
            ha=ha->next->next;
        }
        return tor;
    }
};