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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL  || head->next==NULL) return head;
        vector<ListNode*> odd;
        vector<ListNode*> even;
        ListNode* temp=head;
        int i=1;
        while(temp!=NULL){
            if(i%2!=0) odd.push_back(temp);
            else even.push_back(temp);
            i++;
            temp=temp->next;
        }
        for(int i=0; i<odd.size()-1; i++){
            odd[i]->next=odd[i+1];
        }
        for(int j=0; j<even.size()-1; j++){
            even[j]->next=even[j+1];
        }
        odd[odd.size()-1]->next=even[0];
        even[even.size()-1]->next=NULL;
        return head;
    }
};