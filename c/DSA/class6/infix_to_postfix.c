#include <stdio.h>
#include <ctype.h> 
#include <string.h>  

#define MAX 100

char stack[MAX];
int top = -1;

// push element to stack
void push(char x) {
    stack[++top] = x;
}

// pop element from stack
char pop() {
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

// precedence function
int precedence(char x) {
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    if(x == '^')
        return 3;  // exponent higher precedence
    return -1;
}

int main() {
    char infix[MAX], postfix[MAX];
    int i=0, k=0;
    char x;

    printf("Enter infix expression: ");
    gets(infix);  // ⚠ unsafe, replace with fgets in real programs

    while(infix[i] != '\0') {
        // if operand, add to postfix
        if(isalnum(infix[i])) {
            postfix[k++] = infix[i];
        }
        
        // if '(', push to stack
        else if(infix[i] == '(') {
            push(infix[i]);
        }
        // if ')', pop until '('
        else if(infix[i] == ')') {
            while((x = pop()) != '(') {
                postfix[k++] = x;
            }
        }
        // operator
        else {
            while(precedence(stack[top]) >= precedence(infix[i])) {
                postfix[k++] = pop();
            }
            push(infix[i]);
        }
        i++;
    }

    // pop remaining operators
    while(top != -1) {
        postfix[k++] = pop();
    }

    postfix[k] = '\0';  // null terminate

    printf("Postfix Expression: %s\n", postfix);

    return 0;
}
