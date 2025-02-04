#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node (int data1, Node *link){
        int data=data1;
        next=link;
    }
    Node (int data1){
        int data=data1;
        next=nullptr;
    }
};

int main(){
    vector<int> arr={2,5,7,8};
    Node * head= new Node(arr[0]);
    Node *temp=head;
    for(int i=1;i<arr.size();i++){
        Node *newNode= new Node((arr[i]));
        temp->next=newNode;
        temp=newNode;
    }
    temp=head;
    while(temp!=nullptr){
        cout << temp->data << "->";
        temp=temp->next;
    }
    cout<< "NULL";
    
    return 0;
}