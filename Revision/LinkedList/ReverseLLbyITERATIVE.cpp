#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *link;

    Node(int data1) {
        data = data1;
        link = nullptr;
    }

    Node(int data1, Node *next) {
        data = data1;
        link = next;
    }
};

class Solution {
public:
    Node *ReverseLL(Node *head) {
        Node *t1 = head, *t2 =NULL;

        while (t1 != nullptr) {
            Node * temp=t1->link;
            t1->link = t2;
            t2 = t1;
            t1 = temp;
        }
        return t1; // Return the new head of the reversed list
    }

    void printLinkedList(Node* head) {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
    }
};

int main() {
    Solution sol;
    Node* head = new Node(1);
    head->link = new Node(3);
    head->link->link = new Node(2);
    head->link->link->link = new Node(4);

    Node *ans = sol.ReverseLL(head);
    sol.printLinkedList(ans);  // Print the reversed linked list

    // Output the reversed list
    while (ans != nullptr) {
        cout << ans->data << "->";
        ans = ans->link;  // Move to the next node
    }
    cout << "NULL" << endl;

    return 0;
}
