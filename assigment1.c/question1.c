#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void removeLoop(struct Node* head) {
    struct Node *slow = head, *fast = head;

    // Detect loop
    while (slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            break;
    }

    // If loop exists
    if (slow == fast) {
        slow = head;

        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }

        fast->next = NULL; 
    }
}