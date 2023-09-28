// Inserting from the beginning and the end of the linked list

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *link;
};
Node *head = NULL;

// Function to insert at the beginning of linked list
void insertBeg (int d){
    Node *ptr = new Node();
    ptr -> data = d;
    ptr -> link = head;
    head = ptr;
}

// Function to insert at the end of linked list
void insertEnd (int d){
    Node *ptr = new Node();
    ptr -> data = d;
    ptr -> link = NULL;

    // Check is list empty
    if(head == NULL) head = ptr;
    else{
        Node *temp = head;
        while(temp -> link != NULL){
            temp = temp -> link;
        }
        temp -> link = ptr;
    }
}

// Function to display linked list
void dispLink(){
    Node *temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> link;
    }
    cout << endl;
}
// 1 2 3
int main(){
    insertBeg(2);
    insertBeg(1);
    insertEnd(3);
    dispLink();
    cout << head -> data << " " << head -> link;
    return 0;
}