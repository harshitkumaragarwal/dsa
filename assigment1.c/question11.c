#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insert(struct Node** head, int data) {

    struct Node* newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void printList(struct Node* head) {

    struct Node* temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

void nthFromEnd(struct Node* head, int n) {

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (n <= 0) {
        printf("Invalid value of N\n");
        return;
    }

    struct Node *first = head, *second = head;

    for (int i = 0; i < n; i++) {
        if (first == NULL) {
            printf("N is greater than list length\n");
            return;
        }
        first = first->next;
    }

    while (first != NULL) {
        first = first->next;
        second = second->next;
    }

    printf("Nth node from end is: %d\n", second->data);
}

int main() {

    struct Node* head = NULL;
    int n, x, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter node values:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        insert(&head, value);
    }

    printf("Linked List: ");
    printList(head);

    printf("Enter N: ");
    scanf("%d", &x);

    nthFromEnd(head, x);

    return 0;
}