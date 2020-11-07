#include <bits/stdc++.h>
using namespace std;

//implementation through structure
/* struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int main()
{
    //creating nodes
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // allocating memory to the nodes
    head = new Node();
    second = new Node();
    third = new Node();

    // storing data and pointing to the next node
    head->data = 8;
    head->next = second;

    // second node 
    second->data = 9;
    second->next = third;

    // third node
    third->data = 8;
    third->next = NULL;

    // traversal and printing data stored in the nodes
    traversal(head);
    return 0;
}
 */
// Implementing Linked-List thorugh classes

class Node {
    public: 
            int data;
            Node* next;
};

 void traversal(Node* ptr) {
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr -> next;
    }
    
}

int main() {
    //creating variables
    Node *head, *second, *third;

    // allocating memory
    head = new Node();
    second = new Node();
    third = new Node();

    // storing data and pointing pointer to the next address
    head -> data = 8;
    head -> next = second;

    // second Node
    second -> data = 20;
    second -> next = third;

    // third Node
    third -> data = 23;
    third -> next = NULL;

    // calling traversing or printing the values of nodes
    traversal(head);

    // crated traversal environment in main itself -> No need to call
    // Node *ptr = head;
    // while (ptr != NULL)
    // {
    //     cout << ptr->data << " ";
    //     ptr = ptr->next;
    // }
    return 0;
}