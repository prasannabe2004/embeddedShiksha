#include <iostream>
using namespace std;

/*
Finds if there is a loop in the linked list
Time: O(n)
Space: O(1)

Remove the loop from the linked list
Time: O(n)
*/
struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

bool hasLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;        // 1 step
        fast = fast->next->next;  // 2 steps

        if (slow == fast) return true;  // loop detected
    }
    return false;  // no loop
}

Node* findLoopStart(Node* head) {
    if (!head || !head->next) return nullptr;

    Node* slow = head;
    Node* fast = head;

    // Step 1: Detect loop
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) break;
    }

    // No loop
    if (!fast || !fast->next) return nullptr;

    // Step 2: Find start of loop
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;  // loop starting node
}

void removeLoop(Node* head) {
    Node* loopStart = findLoopStart(head);
    if (!loopStart) return;  // no loop

    Node* current = loopStart;
    while (current->next != loopStart) {
        current = current->next;
    }

    current->next = nullptr;  // remove loop
}

int main() {
    // Create list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Create loop: 5 -> 3
    head->next->next->next->next->next = head->next->next;

    if (hasLoop(head))
        cout << "Loop detected\n";
    else
        cout << "No loop\n";

    Node* loopStart = findLoopStart(head);
    if (loopStart)
        cout << "Loop starts at node with value: " << loopStart->data << endl;
    removeLoop(head);
    if (hasLoop(head))
        cout << "Loop detected\n";
    else
        cout << "No loop\n";
    return 0;
}
