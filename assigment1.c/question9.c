//Reverse a Doubly Linked List
#include <stdio.h>
#include <stdlib.h>

// Define Doubly Linked List Node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to reverse DLL
struct Node* reverseDLL(struct Node* head) {
    struct Node* temp = NULL;
    struct Node* current = head;

    while (current != NULL) {
        // Swap prev and next
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        // Move to next node (which is prev after swap)
        current = current->prev;
    }

    // Update head
    if (temp != NULL)
        head = temp->prev;

    return head;
}

// Function to print DLL
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// Main function
int main() {
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* newNode = NULL;

    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &value);

        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }

    printf("Original List: ");
    printList(head);

    head = reverseDLL(head);

    printf("\nReversed List: ");
    printList(head);

    return 0;
}