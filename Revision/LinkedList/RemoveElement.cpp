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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp=head;
        if(temp==NULL) return temp;
        ListNode *Dummy= new ListNode(0);
        Dummy->next=head;
        ListNode *prev=Dummy;
        while(temp){

            if(temp->val==val){
                prev->next=temp->next;
                delete temp;
            }else{
                prev=temp;
                
            }
            temp=prev->next;

        }
        return Dummy->next;
    }
};