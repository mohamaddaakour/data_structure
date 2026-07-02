#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode) {
        return NULL;
    }

    newNode -> data = data;
    newNode -> next = NULL;

    return newNode;
}

void printLinkedList(struct Node *head) {
    struct Node *current = head;

    while (current != NULL) {
        printf("%d ", current -> data);
        current = current -> next;
    }
}

// calculate the length of a linked list
int lengthLinkedList(struct Node *head) {
    struct Node *current = head;
    int count = 0;

    while (current != NULL) {
        count++;
        current = current -> next;
    }
    return count;
}

void insertAtEnd(struct Node *head, int data) {
    struct Node *newNode = createNode(data);
    if (!newNode) {
        return;
    }

    struct Node *current = head;

    // stop at the last node
    while (current -> next != NULL) {
        current = current -> next;
    }

    current -> next = newNode;
}

void insertAtPosition(struct Node *head, int value, int pos) {
    struct Node *newNode = createNode(value);

    struct Node *current = head;
    int i = 1;

    while (current != NULL && i < pos - 1) {
        current = current -> next;
        i++;
    }

    newNode -> next = current -> next;
    current -> next = newNode;

}

void freeList(struct Node *head) {
    struct Node *temp;

    while (head) {
        temp = head;
        head = head -> next;
        free(temp);
    }
}

int main() {
    // the head pointer that will hold the whole linked list
    struct Node *head = NULL;

    struct Node *Node1 = createNode(1);
    struct Node *Node2 = createNode(2);
    struct Node *Node3 = createNode(3);

    if (!Node1 || !Node2 || !Node3) {
        printf("Memory allocation failed\n");
        return 1;
    }

    head = Node1;
    Node1 -> next = Node2;
    Node2 -> next = Node3;

    printLinkedList(head);

    printf("\n");

    int count = lengthLinkedList(head);
    printf("The length of this linked list is: %d\n", count);

    insertAtEnd(head, 4);

    printLinkedList(head);

    printf("\n");
    
    insertAtPosition(head, 8, 2);

    printLinkedList(head);

    freeList(head);

    return 0;
}