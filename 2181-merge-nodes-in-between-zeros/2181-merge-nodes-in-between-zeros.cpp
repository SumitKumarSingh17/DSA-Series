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
    ListNode* mergeNodes(ListNode* head) {
        vector<int> v;
        ListNode* temp=head->next;
        int sum=0;
        while(temp!=NULL){
            if(temp->val==0){
                v.push_back(sum);
                sum=0;
            }
            else sum+=temp->val;
            temp=temp->next;
        }
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;
        for(int i=0; i<v.size(); i++){
            curr->next=new ListNode(v[i]);
            curr=curr->next;
        }
        return dummy->next;
    }
};