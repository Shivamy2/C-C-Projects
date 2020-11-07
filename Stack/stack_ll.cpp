#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
};

bool isEmpty(Node *top) {
    if(top == NULL)
        return true;
    return false;
}

bool isFull(Node *top) {
    Node * ptr = new Node();
    if(ptr == NULL)
        return true;
    return false;
}

Node *push(Node *top, int ele) {
    if(isFull(top)) cout << "Stack Overflow\n";
    Node * newTop = new Node();
    newTop->data = ele;
    newTop->next = top;
    top = newTop;
    return top;
}

Node *pop(Node *top) {
    if(isEmpty(top)) cout << "Stack Underflow\n";
    Node * helpingTop = top;
    top = top->next;
    delete helpingTop;
    return top;
}

int peek(Node *top, int pos) {
    Node *ptr = top;
    if(isEmpty(top)) return -1;
    for (int i = 0; (i < pos-1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    return -1;
}

int stackTop(Node *top) {
    return top->data;
}

int stackBottom(Node *top) {
    Node *ptr = top;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    
    return ptr->data;
}

void display(Node *top) {
    while(top != NULL) {
        cout << top->data << " ";
        top = top->next;
    }
}

int main() {
    Node *top = new Node();
    top = NULL;
    top = push(top, 315);
    top = push(top, 896);
    top = push(top, 515);
    top = push(top, 022);
    top = push(top, 12);
    // top = push(top, 78);
    display(top);
    cout << endl << "Peeked element is: " << peek(top, 2);
    cout << endl << "Stack Top element is: " << stackTop(top);
    cout << endl << "Stack Bottom element is: " << stackBottom(top);
    return 0;
}