// Remove loop in Linked List
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to remove loop
int removeLoop(struct Node* head) {
    struct Node *slow = head, *fast = head;

    // Detect loop using Floyd’s algorithm
    while (slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            // Loop detected
            slow = head;

            // Special case: loop starts at head
            if (slow == fast) {
                while (fast->next != slow)
                    fast = fast->next;
            } else {
                while (slow->next != fast->next) {
                    slow = slow->next;
                    fast = fast->next;
                }
            }

            // Remove loop
            fast->next = NULL;
            return 1; // Loop removed
        }
    }
    return 0; // No loop found
}

// Utility function to print list
void printList(struct Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = second; // Creating loop

    if (removeLoop(head))
        printf("Loop removed successfully.\n");
    else
        printf("No loop found.\n");

    printList(head);

    return 0;
}