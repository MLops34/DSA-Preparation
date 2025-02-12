#include <iostream>
#include <algorithm>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    Node(int data1){
        int data=data1;
        Node * next=nullptr;
    }
    Node (int data1 , Node *link){
        int data=data1;
        next=link;
    }
};

class solution{
    public:
    bool DetectLoop(Node * head){
        Node * slow=head,*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
};

int main(){
    solution sol;
    Node * head=new Node(10);
    Node * sec=new Node (20);
    head->next=sec;
    Node * third=new Node (30);
    sec->next=third;
    Node *forth=new Node(100);
    third->next=forth;
    bool ans=sol.DetectLoop(head);
    cout << ans;
    return 0;

}
