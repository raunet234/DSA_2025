
//circulerLinkedlist
#include<iostream>

using namespace std;

class Node {//class
public:
    int data;//data
    Node* next;//pointer

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtEnd(Node* &head,int val){
    Node* n = new Node(val);//creating new node
    if(head==NULL){//base case
        n->next=n;
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next !=head){
        temp = temp->next;
    }
    n->next = head;
    temp->next = n;
}

void insertAtBeginning(Node* &head,int val){
    Node* n = new Node(val);//creating new node
    if(head==NULL){//base case
        n->next = n;
        head = n;
        return;
    }

    Node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }
    temp->next= n;
    n->next=head;
    head = n;
}
//deletion at end deletion at beginning(homework)
void insertAtPossition(Node*&head,int pos,int val){
    Node* n=new Node(val);//new node
    Node* temp = head;//pointer heading to head

    for(int i=0;i<pos-1;i++){//loop for finding that possition
        temp=temp->next;//iterating
    }
    n->next= temp->next;//assigning
    temp->next=n;//assinging
}
    //print
    void printList(Node* head) {
    if (head == NULL) return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);  // stop when full circle completed

    cout << endl;
    cout<<"backToHead\n";
}


int main(){
    Node* head = NULL;
    Node n1(10);
    Node n2(20);
    Node n3(30);
}