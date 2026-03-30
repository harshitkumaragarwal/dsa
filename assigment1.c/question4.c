// Linked List Insertion
// at biginning
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Insert at beginning
struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    newNode->data = data;       // Assign data
    newNode->next = head;       // Link to old head
    head = newNode;             // Update head
    
    return head;
}

// Print list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    struct Node* head = NULL;

    head = insertAtBeginning(head, 30);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 10);

    printf("Linked List: ");
    printList(head);

    return 0;
}