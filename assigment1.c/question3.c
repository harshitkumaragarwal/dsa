//Detect Loop in linked list
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to detect loop
int detectLoop(struct Node* head) {
    struct Node *slow = head, *fast = head;

    while (slow && fast && fast->next) {
        slow = slow->next;           // Move 1 step
        fast = fast->next->next;     // Move 2 steps

        if (slow == fast)
            return 1;   // Loop detected
    }

    return 0;   // No loop
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
    third->next = second;  // Creating loop

    if (detectLoop(head))
        printf("Loop Found\n");
    else
        printf("No Loop\n");

    return 0;
}