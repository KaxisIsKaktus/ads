#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *link;
};


class LinkedList{
    private:
    Node *head = NULL;
    Node* tail = NULL;
    public:
    LinkedList(){
        head = NULL;
        tail = NULL;
    }

    void printNode(){
        Node *temp = head;
        if(head == NULL) cout << "List is empty.";
        else{
            while (temp != NULL){
                cout << temp -> data << " ";
                temp = temp -> link;
            }
        }
        cout << endl;
    }
    void push_front(int d){
        Node *ptr = new Node();
        ptr -> data = d;
        ptr -> link = NULL;

        if(head == NULL) head = tail = ptr;
        else{
            ptr->link = head;
            head = ptr;
        }
        
    }

    void push_back(int d){
        Node *ptr = new Node();
        Node *next = head;
        ptr -> data = d;
        ptr -> link = NULL;

        if (tail == NULL) head = tail = ptr ;
        else {
            tail->link = ptr;
            tail = ptr;
        }
    }

    void pop_front(){
        Node *ptr = head;
        head = head->link;
        delete(ptr);
    }
    void pop_back(){
        Node *ptr;
        // Is list empty
        if (head == NULL) cout << "List is empty";
        
        // If list has only 1 node
        if (head -> link == NULL){
            ptr = head;
            head = tail = NULL;
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
            tail = prev;
            delete(ptr);
        }
    }
};



int main(){
    int n, k;
    LinkedList list;
    cin >> n;
    //int arr[n];
        list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.push_front(100);
    list.push_front(200);
    list.push_front(300);
    list.pop_back();
    list.pop_front();
// for(int i = 0; i < n; i++){


// }
    list.printNode();
   
}