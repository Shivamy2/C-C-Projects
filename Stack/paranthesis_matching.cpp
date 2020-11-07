#include <bits/stdc++.h>
using namespace std;

class Stack {
    public:
    int size;
    int top;
    char *arr;
};

bool isEmpty(Stack *s) {
    if(s->top == -1)
        return true;
    return false;
}

bool isFull(Stack *s) {
    if(s->top == s->size -1)
        return true;
    return false;
}

void push(Stack *s, char ele) {
    if(isFull(s)) cout << "Stack Underflow!" << endl;
    s->top++;
    s->arr[s->top] = ele;
}

void pop(Stack *s) {
    s->top--;
}

void display(Stack *s) {
    for (int i = 0; i <= s->top; i++)
    {
        cout << s->arr[i];
    }
}

bool paranthesisMatching(char *expression) {
    
    Stack *s = new Stack();

    // initializing the Stack
    s->size = 100;
    s->top = -1;
    s->arr = new char(s->size);

    for(int i = 0; expression[i] != '\0'; i++) {
        if(expression[i] == '(') {
            push(s, expression[i]);
        } else if(expression[i] == ')')
        {
            if(isEmpty(s)) return false;
             pop(s);
        }
    }
    if(isEmpty(s)) return true;
    return false;
}

int main() {
    // making the pointer object of Stack class
    char *expression = "{3+4(5*3)/[(3+4)/(9*5)]}";
    if(paranthesisMatching(expression)) cout << "Paranthesis is matching\n";
    else cout << "Paranthesis is not matching\n";
    
    return 0;
}