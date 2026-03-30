//Find length of Loop
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to find length of loop
int countLoopNodes(struct Node* head) {
    struct Node *slow = head, *fast = head;

    while (slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            // Loop detected
            int count = 1;
            struct Node* temp = slow;

            while (temp->next != slow) {
                count++;
                temp = temp->next;
            }

            return count;   // Length of loop
        }
    }

    return 0;   // No loop
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = second;  // Creating loop

    int length = countLoopNodes(head);

    if (length)
        printf("Length of Loop: %d", length);
    else
        printf("No Loop Found");

    return 0;
}