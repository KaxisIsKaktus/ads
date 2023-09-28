// Deleting from the beginning and the end of linked list

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *link;
};
Node *head = NULL;

void insertBeg(int d){
    Node *ptr = new Node();
    ptr -> data = d;
    ptr -> link = head;
    head = ptr;
}

void insertEnd(int d){
    Node *ptr = new Node();
    ptr -> data = d;
    ptr -> link = NULL;
    if(head == NULL) head = ptr;
    else{
        Node *temp = head;
        while(temp -> link != NULL){
            temp = temp -> link;
        }
        temp -> link = ptr;
    }
}

void dispLink(){
    Node *temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> link;
    }
}

// Function to delete node at the beginning
void deleteBeg(){
    // Check for emptyness of the list
    if(head == NULL) cout << "List is empty";
    else{
        Node *ptr = head;
        head = head -> link;
        delete(ptr);
    }
}

// Function to delete node at the end
void deleteEnd(){
    Node *ptr;
    // Is list empty
    if (head == NULL) cout << "List is empty";
    
    // If list has only 1 node
    if (head -> link == NULL){
        ptr = head;
        head = NULL;
        delete(ptr);
    }
    // Traversing the list 
    else{
        Node *prev;
        ptr = head;
        while(ptr -> link != NULL){
            prev = ptr;
            ptr = ptr -> link; 
        }
        prev -> link = NULL;
        delete(ptr);
    }
}

int main(){
    insertBeg(2);
    insertBeg(1);
    insertEnd(3);
    dispLink();
    deleteBeg();
    deleteEnd();
    cout << endl;
    dispLink();
}