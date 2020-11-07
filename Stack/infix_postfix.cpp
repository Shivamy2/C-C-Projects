#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int size;
    int top;
    char *arr;
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

void push(Stack *s, char ele)
{
    if (isFull(s))
        cout << "Stack Underflow!" << endl;
    s->top++;
    s->arr[s->top] = ele;
}

char pop(Stack *s)
{
    char poppedValue = s->arr[s->top];
    if(isEmpty(s)) return -1;
    s->top--;
    return poppedValue;
}

void display(Stack *s)
{
    for (int i = 0; i <= s->top; i++)
    {
        cout << s->arr[i];
    }
}

int stackTop(Stack *s) {
    return s->arr[s->top];
}

bool isOperator(char infixChar) {
    if (infixChar == '+' || infixChar == '-' ||
     infixChar == '*' || infixChar == '/' ||
      infixChar == '^') return true;
    return false;
    
}

int prec(char infixChar) {
    if(infixChar == '+' || infixChar == '-') return 1;
    else if(infixChar == '*' || infixChar == '/') return 2;
    else if(infixChar == '^') return 3;
    return -1;
}

char *infixToPostfix(char *expression)
{
    Stack *s = new Stack(); // creating pointer object of Stack
    // initializing the Stack
    s->size = 100;
    s->top = -1;
    s->arr = new char(s->size);
    char *postfix = new char(strlen(expression) + 1);
    int j = 0;
    for (int i = 0; expression[i] != '\0'; i++)
    {
        if (!isOperator(expression[i])) {
            postfix[j] = expression[i];
            j++;
        }
        else
        {
            if (prec(expression[i]) > prec(stackTop(s)))
                push(s, expression[i]);
            else
                postfix[j] = pop(s);
                j++;
        }
    }
    while (!isEmpty(s))
    {
        postfix[j] = pop(s);
        j++;
    }
    postfix[j] == '\0';
    return postfix;
}

int main()
{
    char *exp = "A+B/C^F";
    cout << infixToPostfix(exp);
    return 0;
}