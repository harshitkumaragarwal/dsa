//Check If Circular Linked List
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to check circular
int isCircular(struct Node* head) {
    if (head == NULL)
        return 0;

    struct Node* temp = head->next;

    while (temp != NULL && temp != head) {
        temp = temp->next;
    }

    if (temp == head)
        return 1;   // Circular
    else
        return 0;   // Not circular
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = head;   // Making circular

    if (isCircular(head))
        printf("Linked List is Circular");
    else
        printf("Linked List is Not Circular");

    return 0;
}