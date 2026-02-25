#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head = NULL, *newNode = NULL, *temp = NULL;
    int value;

    
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 20;
    head->next = NULL;

    printf("Enter value to insert at beginning: ");
    scanf("%d", &value);

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    newNode->next = head;  
    head = newNode;        

    temp = head;
    printf("Updated List: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}