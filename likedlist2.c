#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int n, i, value;

    // Create Linked List
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter data: ");
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = newNode;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Display Linked List
    printf("Linked List: ");
    temp = head;

    if(temp == NULL) {
        printf("List is empty");
    }
    else {
        while(temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL");
    }

    return 0;
}