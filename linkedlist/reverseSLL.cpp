#include <iostream>

using namespace std;

/*
Reverse a linked list
Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL
Time Complexity: O(n)
Space Complexity: O(1)
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

void reverse(Node*& head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;
    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

int main() {
    Node* head = nullptr;
    init(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    print(head);
    reverse(head);
    print(head);
    return 0;
}