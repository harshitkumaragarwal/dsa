#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node **head, int data, int pos) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;

    if (pos == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) return;

    newNode->next = temp->next;
    temp->next = newNode;
}