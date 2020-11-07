#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *prev;
    Node *next;
};

//display function
void display(Node *ptr) {
    while(ptr != NULL) {
        cout << ptr -> data << " ";
        ptr = ptr -> next;
    }
}

int main() {
    // creating nodes
    Node *head, *second, *third, *forth;
    
    // allocating memory to nodes
    head = new Node();
    second = new Node();
    third = new Node();
    forth = new Node();

    // initializing values
    head -> data = 20;
    head -> prev = NULL;
    head -> next = second;
    
    second -> data = 30;
    second -> prev = head;
    second -> next = third;
    
    third -> data = 40;
    third -> prev = second;
    third -> next = forth;
    
    forth -> data = 50;
    forth -> prev = third;
    forth -> next = NULL;

    // calling print function to display the values
    display(head);

    return 0;
}