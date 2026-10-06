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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        int n=0;
        ListNode* temp=head;
        while(temp->next!=NULL){
            n++;
            temp=temp->next;
        }
        n++;
        k=k%n;
        if(k==0) return head;
        temp->next=head;
        ListNode* curr=head;
        for(int i=1; i<n-k; i++){
            curr=curr->next;
        }
        head=curr->next;
        curr->next=NULL;
        return head;
    }
};