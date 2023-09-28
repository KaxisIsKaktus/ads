// Reversing the linked list

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
    if (head == NULL) head = ptr;
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
    if (head == NULL) cout << "List is empty.";
    else{
        cout << "Well, the is: ";
        while (temp != NULL){
            cout << temp -> data << " ";
            temp = temp -> link;
        }
    }
    cout << endl;
}

void reverseList(){
    // Creating three different pointers get though the list: p = previous, c = current, n = next;
    Node *p, *c, *n;
    p = NULL;
    c = head;
    // Checking for emptyness of the linked list 
    if(c == NULL) cout << "List is empty.";
    else{
        while (c != NULL){
            n = c -> link;
            c -> link = p;
            p = c;
            c = n;
        }
        head = p;
        cout << "Reverse is complited." << endl;
    }
}

int main(){
    insertBeg(2);
    insertBeg(1);
    insertEnd(3);
    insertEnd(4);
    dispLink();
    reverseList();
    dispLink();
}