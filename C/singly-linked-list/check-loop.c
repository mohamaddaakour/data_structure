#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

void deleteFirst(struct Node **head) {
    // check if the list is empty
    if (*head == NULL) {
        return;
    }

    struct Node *current = *head;

    // to dereference head we put it in ()
    *head = (*head) -> next;

    free(current);
}

void deleteLast(struct Node *head) {
    struct Node *current = head;
    struct Node *p = head;

    while (current -> next -> next != NULL) {
        current = current -> next;
    }

    p = current;
    current = current -> next;
    p -> next = NULL;

    free(current);
}

bool checkLoop(struct Node *head) {
    struct Node *slow = head;
    struct Node *fast = head;

    while (slow && fast) {
        slow = slow -> next;
        fast = fast -> next -> next;

        if (slow == fast) {
            return true;
        }
    }
    return false;
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
    struct Node *Node4 = createNode(4);
    struct Node *Node5 = createNode(5);
    struct Node *Node6 = createNode(6);

    if (!Node1 || !Node2 || !Node3) {
        printf("Memory allocation failed\n");
        return 1;
    }

    head = Node1;
    Node1 -> next = Node2;
    Node2 -> next = Node3;
    Node3 -> next = Node4;
    Node4 -> next = Node5;
    Node5 -> next = Node6;
    Node6 -> next = Node3;

    bool check = checkLoop(head);

    printf("%s\n", check ? "true" : "false");

    freeList(head);

    return 0;
}