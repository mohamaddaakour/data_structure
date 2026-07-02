#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *createDoubly(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode) {
        return NULL;
    }

    newNode -> data = value;
    newNode -> next = NULL;
    newNode -> prev = NULL;

    return newNode;
}

void insertAtEnd(struct Node **head, int value) {
    struct Node *newNode = createDoubly(value);
    
    // if the list is empty
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node *current = *head;

    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
    newNode->prev = current;
}

// n = 0 print forward
// n = 1 print backward
void printDoubly(struct Node *head, int n) {
    if (head == NULL)
        return;

    struct Node *current = head;

    if (n == 0) {
        while (current) {
            printf("%d ", current -> data);
            current = current -> next;
        }
    } else {
        while (current -> next != NULL) {
            current = current -> next;
        }
        while (current) {
            printf("%d ", current -> data);
            current = current -> prev;
        } 
    }
}

int main() {
    struct Node *head = NULL;

    insertAtEnd(&head, 0);
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);

    printDoubly(head, 0);
    printDoubly(head, 1);

    return 0;
}