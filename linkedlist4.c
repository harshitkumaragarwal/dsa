#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int value;

    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    printf("Enter value to insert at end: ");
    scanf("%d", &value);

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
    }
    else {
        temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Display list
    temp = head;
    printf("Updated List: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}