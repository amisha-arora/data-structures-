#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize the node with a value
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void insertAtTail(Node*& head, int val) {
    Node* n = new Node(val);
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

void insertAtHead(Node*& head, int val) {
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void insertAfter(Node* prev_node, int val) {
    if (prev_node == nullptr) {
        cout << "Previous node cannot be NULL" << endl;
        return;
    }
    Node* n = new Node(val);
    n->next = prev_node->next;
    prev_node->next = n;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;

    insertAtTail(head, 1);
    display(head);

    insertAtTail(head, 2);
    display(head);

    insertAtHead(head, 4);
    display(head);

    insertAfter(head->next, 3); // Insert after the second node (head->next)

    display(head);

    return 0;
}
