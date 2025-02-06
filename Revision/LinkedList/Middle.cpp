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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head; int length=0;
        while(temp){
            length++;
            temp=temp->next;
        }
        int mid=0;
        if(length/2==0){
            mid=(length/2)+1;
        }else{
            mid=length/2;
        }
        temp=head;
        if(length==1) return temp;
        for(int i=mid;i>0;i--){
            temp=temp->next;
        }
        return temp;
    }
};