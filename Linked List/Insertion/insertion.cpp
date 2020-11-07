#include <bits/stdc++.h>
using namespace std;

class Node {
    public : 
    int data;
    Node * next;
};

void display(Node* ptr) {
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr -> next;
    }
    cout << endl;
}

/* Node *insertionAtFirst(Node* head, int data) { */
Node *insertionAtIndex(Node* head, int index, int data) {
    Node *ptr = new Node();

    // storing head so that head will not be changed
    Node * p = head;
    int i = 0;

    while (i != index-1)
    {
        p = p -> next;
        i++;
    }
    
    ptr -> data = data;
    ptr -> next = p -> next;
    p -> next = ptr;
    
    return head;
}

Node *insertAtEnd(Node* head, int data) {
    Node *ptr = new Node();
    Node *p = head;

    while (p -> next != NULL)
    {
        p = p ->next;
    }
    ptr -> data = data;
    p -> next = ptr;
    ptr -> next = NULL;

    return head;
}
Node *insertAfterNode(Node *head, Node *previousNode, int data) {
    Node *ptr = new Node();
    ptr -> data = data;
    ptr -> next = previousNode -> next;
    previousNode -> next = ptr;

    return head;
}

int main() {
    Node *head, *second, *third, *forth;
    
    head = new Node();
    second = new Node();
    third = new Node();
    forth = new Node();

    head -> data = 2;
    head -> next = second;
    
    second -> data = 5;
    second -> next = third;

    third -> data = 7;
    third -> next = forth;
    
    forth -> data = 10;
    forth -> next = NULL;

    // displaying nodes values
    display(head);   
    // after Insertion
    head = insertAfterNode(head, head, 60);
    // displaying after insertion values
    display(head);
    return 0;
}