#include <iostream>

using namespace std;

/*
Find the nth node from the end of a linked list
Input: 1->2->3->4->5->6->7->8->9->10, n = 2
Output: 9
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Node {
   public:
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

Node* findNthNodeFromEndofList(Node* head, int n) {
    Node* slow = head;
    Node* fast = head;
    for (int i = 0; i < n; i++) {
        if (fast == nullptr) {
            return nullptr;
        }
        fast = fast->next;
    }
    while (fast != nullptr) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    head->next->next->next->next->next->next->next = new Node(8);
    head->next->next->next->next->next->next->next->next = new Node(9);
    head->next->next->next->next->next->next->next->next->next = new Node(10);

    Node* nthNode = findNthNodeFromEndofList(head, 2);
    if (nthNode != nullptr) {
        cout << "The nth node from the end of the list is: " << nthNode->data
             << endl;
    } else {
        cout << "The nth node from the end of the list does not exist." << endl;
    }
    return 0;
}
