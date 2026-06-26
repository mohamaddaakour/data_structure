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

    free(Node1);
    free(Node2);
    free(Node3);

    return 0;
}