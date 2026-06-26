#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// queue structure
struct Queue {
    struct Node* front;
    struct Node* rear;
};

// create the queue
struct Queue* createQueue() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    if (!q)
	    return NULL;

    q->front = NULL;
    q->rear = NULL;
    return q;
}

// create a node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode)
	    return NULL;

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void enqueue(struct Queue* q, int data) {
    struct Node* newNode = createNode(data);
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }

    // if queue is empty, rear and front points to the new node
    if (q->rear == NULL) {
        q->front = newNode;
        q->rear = newNode;
        return;
    }

    q->rear->next = newNode;
    q->rear = newNode;
}

void dequeue(struct Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    struct Node* temp = q->front;
    q->front = q->front->next;

    // if queue becomes empty
    if (q->front == NULL) {
        q->rear = NULL;
    }

    free(temp);
}

// get front value
int peek(struct Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty\n");
        return -1;
    }
    return q->front->data;
}

void display(struct Queue* q) {
    struct Node* current = q->front;
    if (!current) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");
    while (current) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void freeQueue(struct Queue* q) {
    while (q->front) {
        dequeue(q);
    }
    free(q);
}

int main() {
    struct Queue* q = createQueue();

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    display(q);

    printf("Front element: %d\n", peek(q));

    dequeue(q);
    display(q);

    freeQueue(q);
    return 0;
}