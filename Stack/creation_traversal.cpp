#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int top;
    int size;
    int *arr;
};

bool isEmpty(Stack *s)
{
    if (s->top == -1)
        return true;
    return false;
}

bool isFull(Stack *s)
{
    if (s->top == s->size - 1)
        return true;
    return false;
}

int peek(Stack *s, int pos)
{
    int val = s->top - pos + 1;
    if (val < 0)
    {
        cout << "Position overflown!\n";
    }
    return val;
}

void display(Stack *s)
{

    cout << "Your OUTPUT is : \n";

    for (int i = 0; i <= s->top; i++)
    {
        cout << "The position at value " << s->arr[i] << " is " << peek(s, i) << endl;
    }
}

void push(Stack *s, int eVal)
{
    if (isFull(s))
        cout << "Stack Overflow!!\n";
    else
    {
        s->top++;
        s->arr[s->top] = eVal;
    }
}

int pop(Stack *s)
{
    int val = s->arr[s->top];
    if (isEmpty(s))
        cout << "Stack underflow!!\n";
    else
    {
        s->top--;
    }
    return val;
}

int stackTop(Stack *s)
{
    return s->arr[s->top];
}

int stackBottom(Stack *s)
{
    return s->arr[0];
}

int main()
{
    // creating object of stack class
    Stack *s = new Stack();
    // initializing values
    // cout << "Sucess!";
    s->size = 10;
    s->top = -1;
    s->arr = new int(s->size);
    // s -> arr[0] = 2;
    // s -> top++;

    // pushing extra elements
    push(s, 34);
    push(s, 35);
    push(s, 36);
    push(s, 37);
    push(s, 38);

    //poppping extra elements
    // int popVal = pop(s);

    // displaying the values stored in the Stack
    display(s);

    cout << "\nTop most value of this stack is: " << stackTop(s) << endl;
    cout << "\nBottom most value of this stack is: " << stackBottom(s) << endl;

    pop(s);
    display(s);

    cout << "\nTop most value of this stack is: " << stackTop(s) << endl;
    cout << "\nBottom most value of this stack is: " << stackBottom(s) << endl;

    return 0;
}