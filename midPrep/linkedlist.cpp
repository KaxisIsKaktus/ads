#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;

    Node(int Data){
        this -> data = data;
        next = NULL;
        prev = NULL;
    }
};

struct LinkedList{
    Node *head, *tail;

    LinkedList(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int data){
        Node *node = new Node(data);
        if(head == NULL) {
            tail = node;
            head = node;
        } else{
            head -> prev = node;
            node -> next = head;
            head = node;
        }
    }

    void push_back(int data){
        Node *node = new Node(data);
        if(tail == NULL){
            tail = node;
            head = node;
        } else{
            tail -> next = node;
            node -> prev = tail;
            tail = node;
        }
    }

    void pop_back(){
        if(tail -> next == NULL){
            Node *node = tail;
            tail = node -> prev;
            free(node);
        } else {}
    }
}

int main(){
    //
}