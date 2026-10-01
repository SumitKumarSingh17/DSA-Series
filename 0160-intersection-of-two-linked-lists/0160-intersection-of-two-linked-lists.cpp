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
        ListNode* p=headA;
        ListNode* q=headB;
        while(p!=NULL){
            q=headB;
            while(q!=NULL){
                if(p==q) return p;
                else q=q->next;
            }
            p=p->next;
        }
        return NULL;
    }
};