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
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        vector<ListNode*> v;
        int l=0;
        while(temp!=NULL){
            l++;
            v.push_back(temp);
            temp=temp->next;
        }
        k%=l;
        v[v.size()-1]->next=v[0];
        temp=head;
        for(int i=1; i<v.size()-k; i++){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};