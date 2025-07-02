#include <iostream>
using namespace std;

// Define the Node structure
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Insert at the beginning of the list
void insertAtBeginning(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

// Insert at a given position
void insertAtPosition(Node*& head, int pos, int val) {
    if (pos == 0) {
        insertAtBeginning(head, val);
        return;
    }

    Node* newNode = new Node(val);
    Node* temp = head;

    for (int i = 0; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of bounds.\n";
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteFromPosition(Node*& head, int pos) {
    if (head == nullptr) return;

    // Deleting from beginning
    if (pos == 0) {
        deleteFromBeginning(head);
        return;
    }

    Node* temp = head;
    for (int i = 0; i < pos - 1; i++) {
        if (temp == nullptr || temp->next == nullptr) return; // Invalid position
        temp = temp->next;
    }

    if (temp->next == nullptr) return; // Nothing to delete

    Node* toDel = temp->next;
    temp->next = temp->next->next;
    delete toDel;
}

bool search(Node* head,int key){
    
}

void deleteFromEnd(Node*&head){
    if(head==NULL) return;
    if(head->next==NULL){
        delete head ;
        head = NULL;
        return;
    }

    Node*temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;

    }

    delete temp->next;
    temp->next=NULL;
}

// Print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Main function
int main() {
    Node* head = nullptr;

    insertAtPosition(head, 0, 10); // List: 10
    insertAtPosition(head, 1, 20); // List: 10 -> 20
    insertAtPosition(head, 1, 15); // List: 10 -> 15 -> 20
    insertAtPosition(head, 3, 25); // List: 10 -> 15 -> 20 -> 25
    insertAtPosition(head, 5, 30); // Invalid: position out of bounds

    printList(head); // Expected: 10 -> 15 -> 20 -> 25 -> NULL

    return 0;
}
