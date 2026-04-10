#include <stdio.h>
#define MAX 10

int arr[MAX];
int top1 = -1;
int top2 = MAX;

// Push Stack 1
void push1(int x) {
    if (top1 + 1 == top2) {
        printf("Overflow\n");
        return;
    }
    arr[++top1] = x;
}

// Push Stack 2
void push2(int x) {
    if (top1 + 1 == top2) {
        printf("Overflow\n");
        return;
    }
    arr[--top2] = x;
}

// Pop Stack 1
void pop1() {
    if (top1 == -1) {
        printf("Underflow\n");
        return;
    }
    printf("Popped from Stack1: %d\n", arr[top1--]);
}

// Pop Stack 2
void pop2() {
    if (top2 == MAX) {
        printf("Underflow\n");
        return;
    }
    printf("Popped from Stack2: %d\n", arr[top2++]);
}

int main() {
    push1(5);
    push1(10);
    push2(15);
    push2(20);

    pop1();
    pop2();

    return 0;
}