#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*prev;
    Node*next;
    Node(int val){
        data=val;
        prev=nullptr;
        next=nullptr;
    }
};
void insertAtHead(Node*& head,int val){
    Node*n=new Node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;    
    }
    head=n;
}
void insertAtTail(Node*& head,int val){
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    Node*n=new Node(val);
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
// deletion code
void deleteAtHead(Node*& head) {
    if (head == nullptr) return;
    Node* todelete = head;
    head = head->next;
    if (head != nullptr) {
        head->prev = nullptr;
    }
    delete todelete;
}

void deletion(Node*& head, int pos) {
    if (head == nullptr) return;
    if (pos == 1) {
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    int count = 1;
    while (temp != nullptr && count != pos) {
        temp = temp->next;
        count++;
    }
    if (temp == nullptr) return; // Position is out of bounds
    if (temp->prev != nullptr) {
        temp->prev->next = temp->next;
    }
    if (temp->next != nullptr) {
        temp->next->prev = temp->prev;
    }
    delete temp;
}
void display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main() {
    Node* head = nullptr;
    insertAtHead(head,5);
    display(head);
    insertAtTail(head,1);
    display(head);
    insertAtHead(head,6);
    display(head);
    deletion(head,2);
    display(head);
    deleteAtHead(head);
    display(head);
    return 0;
}
