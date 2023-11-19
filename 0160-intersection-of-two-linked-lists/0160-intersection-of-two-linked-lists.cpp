/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a=headA;
        ListNode *b=headB;
        if(a==NULL)return NULL;
        if(b==NULL)return NULL;
        while(a!=b){
            a=a==NULL? headB:a->next;
            b=b==NULL? headA:b->next;
        }
        return a;
    }
};