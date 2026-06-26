#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void push(struct Node **top, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Overflow");
        return;
    }

    newNode -> data = value;

    // first time the top will be NULL
    newNode -> next = *top;

    *top = newNode;
}

int pop(struct Node **top) {
    // if the stack is empty
    if (!*top) {
        printf("underflow");
        return -1;
    }

    struct Node *tmp = *top;
    int value = tmp -> data;

    *top = (*top) -> next;

    free(tmp);

    return value;
}

// return the top value
int peek(struct Node *top) {
    if (top == NULL)
        return -1;
    return top->data;
}

void display(struct Node *top) {
    struct Node *current = top;

    while (current != NULL) {
        printf("%d ", current -> data);
        current = current -> next;
    }
}

int main() {
    struct Node *top = NULL;

    push(&top, 1);
    push(&top, 2);
    push(&top, 3);
    push(&top, 4);

    printf("%d\n", pop(&top));

    display(top);

    return 0;
}