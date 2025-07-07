#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int value){

};

void deleteFromEnd(Node*& head) {
    // If list is empty
    if (head == NULL) {
        return;
    }

    // If there's only one node
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    // Traverse to the last node
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Adjust the previous node's next pointer
    temp->prev->next = NULL;

    // Delete the last node
    delete temp;
}
}
