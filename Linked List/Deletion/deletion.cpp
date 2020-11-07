#include<bits/stdc++.h>
using namespace std;

class Node {
    public: 
            int data;
            Node* next;
};

 void display(Node* ptr) {
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr -> next;
    }
}

Node *deletionAtStart(Node *head) {
    Node *ptr = head;
    head = head -> next;
    delete ptr;
    return head;
}

Node *deletionAtLast(Node *head) {
    Node *ptr = head;
    Node *helpingPtr = ptr -> next;

    while (helpingPtr -> next != NULL)
    {
        ptr = ptr -> next;
        helpingPtr = helpingPtr -> next;    
    }

    ptr -> next = NULL;
    delete helpingPtr;
    return head;
}

Node *deletionAtIndex(Node *head, int index) {
    Node *ptr = head;
    Node *helpingPtr;
    int i = 0;
    while (i != index-1)
    {
        ptr = ptr -> next;
        i++;
    }

    helpingPtr = ptr -> next;
    ptr -> next = helpingPtr -> next;

    delete helpingPtr;
    return head;
}

Node *deletionAtNode(Node *head, int deletingNode) {
    Node *ptr = head;
    Node *helpingPtr = ptr -> next;
    
    while (helpingPtr -> data != deletingNode && helpingPtr -> next != NULL)
    {
        ptr = ptr -> next;
        helpingPtr = helpingPtr -> next;
    }

    if (helpingPtr -> data == deletingNode)
    {
        ptr -> next = helpingPtr -> next;
        delete helpingPtr;
    }
    
    return head;
}

int main() {
    //creating variables
    Node *head, *second, *third, *forth;

    // allocating memory
    head = new Node();
    second = new Node();
    third = new Node();
    forth = new Node();

    // storing data and pointing pointer to the next address
    head -> data = 8;
    head -> next = second;

    // second Node
    second -> data = 20;
    second -> next = third;

    // third Node
    third -> data = 23;
    third -> next = forth;
    
    forth -> data = 50;
    forth -> next = NULL;

    // calling traversing or printing the values of nodes
    cout << "Values Before Deletion\n";
    display(head);
    head = deletionAtNode(head, 28);
    cout << endl << "\nValues After Deletion\n";
    display(head);
    return 0;
}