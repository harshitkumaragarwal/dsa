//Linked List Length Even or Odd
#include <stdio.h>
#include <stdlib.h>

// Define Node
struct Node {
    int data;
    struct Node* next;
};

// Function to check even or odd length
void checkEvenOdd(struct Node* head) {
    struct Node* temp = head;

    while (temp != NULL && temp->next != NULL) {
        temp = temp->next->next;
    }

    if (temp == NULL)
        printf("Length of Linked List is Even\n");
    else
        printf("Length of Linked List is Odd\n");
}

// Function to print list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &value);

        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("Linked List: ");
    printList(head);

    printf("\n");
    checkEvenOdd(head);

    return 0;
}