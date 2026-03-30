#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int detectLoop(struct Node* head) {

    struct Node *slow = head;
    struct Node *fast = head;

    while (fast != NULL && fast->next != NULL) {

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return 1;   // Loop exists
    }

    return 0;   // No loop
}

int main() {
    struct Node *head = NULL;

    if(detectLoop(head))
        printf("Loop exists");
    else
        printf("No loop");

    return 0;
}