/*
Question:
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.
Approach:
Start with a temp node with value -1. 
Traverse the lists and add smaller nodes to temp node and keep moving.
Note:Very similar to brute force approach  but here we are assing nodes to make a new list not making new list with new values.

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       if (list1==NULL)
       return list2;
       if (list2==NULL)
       return list1;
        ListNode* head=new ListNode(-1);
        ListNode* t=head;
        while(list1!=NULL&&list2!=NULL){
        if(list1->val<=list2->val)
        {
            t->next=list1;
            list1=list1->next;
        }
        else
        {
            t->next=list2;
            list2=list2->next;
        }
        t=t->next;
        }
        if(list1!=NULL)
        t->next=list1;
        if(list2!=NULL)
        t->next=list2;
        return head->next;
    }
};