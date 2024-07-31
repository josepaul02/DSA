/*
Question:
Given the head of a linked list, rotate the list to the right by k places.
Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]

Approach:
if k>l then we only need to rotate the list k%l times
attach end of list to head and break off the k-l element
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL|| head->next==NULL||k==0)
        return head;
        ListNode* t=head;
        int l=1;
        while(t->next!=NULL)
        {
            t=t->next;
            l++;
        }
        t->next=head;
        if(k>l)
        {
            k=k%l;
        }
        int n=l-k;
        for(int i=0;i<n;i++)
        {
            t=t->next;

        }
        head=t->next;
        t->next=NULL;
        return head;

        
    }
};