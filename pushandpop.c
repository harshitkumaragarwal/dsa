#include<stdio.h>
#define max 5

int stack[max];
int top=-1;

//push
void push(int value){
if(top==max-1){
    printf("the stack is overflow");
}
else{
    top++;
    stack[top]=value;
}
}

//pop
void pop(){
if(top==-1){
    printf("the stack is underflow");
}
else{
    top--;
}
}
void display() {
    if (top == -1) {
        printf("Stack is Empty\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
// MAIN function
int main() {
    push(10);
    push(20);
    push(30);

    display();

    pop();
    display();

    return 0;
}