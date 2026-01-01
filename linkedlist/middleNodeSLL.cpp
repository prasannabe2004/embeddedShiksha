#include <iostream>

using namespace std;

/*
Find the middle node of a linked list.
If the list has an even number of nodes, return the second middle node.
Example:
Input: head = [1,2,3,4,5]
Output: [3]
*/
class Node {
   public:
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

void init(Node*& head, int d) {
    Node* n = new Node(d);
    n->next = head;
    head = n;
}
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void insertAtEnd(Node*& head, int d) {
    Node* n = new Node(d);
    if (head == nullptr) {
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(Node*& head, int d) {
    Node* n = new Node(d);
    n->next = head;
    head = n;
}

Node* middleNode(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    Node* head = nullptr;
    init(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    insertAtHead(head, 7);

    print(head);
    Node* middle = middleNode(head);
    cout << middle->data << endl;
    return 0;
}