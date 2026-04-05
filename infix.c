#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// push into stack
void push(char x) {
    if (top < MAX - 1) {
        stack[++top] = x;
    }
}

// pop from stack
char pop() {
    if (top == -1)
        return -1;
    return stack[top--];
}

// check precedence
int precedence(char x) {
    if (x == '^')
        return 3;
    else if (x == '*' || x == '/')
        return 2;
    else if (x == '+' || x == '-')
        return 1;
    else
        return 0;
}

int main() {
    char infix[MAX], postfix[MAX];
    int i, j = 0;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    for (i = 0; infix[i] != '\0'; i++) {
        
        // if operand, add to postfix
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        }
        
        // if '(', push to stack
        else if (infix[i] == '(') {
            push(infix[i]);
        }
        
        // if ')', pop until '('
        else if (infix[i] == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[j++] = pop();
            }
            pop(); // remove '('
        }
        
        // if operator
        else {
            while (top != -1 && precedence(stack[top]) >= precedence(infix[i])) {
                postfix[j++] = pop();
            }
            push(infix[i]);
        }
    }

    // pop remaining operators
    while (top != -1) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    printf("Postfix expression: %s\n", postfix);

    return 0;
}