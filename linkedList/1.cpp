// Creating Node Structures

#include <iostream>
using namespace std;

// Creating Node Structure
struct Node{
    int data;
    Node *link;
};
// Creating head pointer and equating to NULL
Node *head = NULL;

int main(){
    // Creating a new Node
    Node *ptr = new Node();
    // Adding data and setting link to NULL
    ptr -> data = 2;
    ptr -> link = NULL;
     // Pointing head to created Node
    head = ptr;
    cout << "Data is " << ptr -> data << ". Link to the next element is " << ptr -> link << " " << ptr << endl;
    cout << head -> data << " " << head -> link << " " << head;
}