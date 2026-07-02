#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));
    if (!newNode)
        return NULL;

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int findMax(struct Node* root) {
    if (root == NULL)
        return INT_MIN;

    int leftMax = findMax(root->left);
    int rightMax = findMax(root->right);

    int max = root->data;
    if (leftMax > max) max = leftMax;
    if (rightMax > max) max = rightMax;

    return max;
}

int main() {
    struct Node *root = createNode(10);

    root->left = createNode(5);
    root->right = createNode(15);

    root->left->left = createNode(2);
    root->left->right = createNode(7);

    printf("%d ", findMax(root));

    return 0;
}