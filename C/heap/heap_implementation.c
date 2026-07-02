// we have 2 kinds of heaps: min-heap and max-heap
// min-heap: all the childrens are greater than parents
// max-heap: all the childrens are lower than parents
// the heap is a binary tree and represented by an array and we move in it level by level

// to get the index of left child of a parent: 2i + 1
// to get the index of right child of a parent: 2i + 2
// to get the index of parent of a child: (i - 1) / 2

// here we are working with min-heap

// this library to enable the allocation
#include <stdlib.h>

// this library to use size_t
#include <stddef.h>

// this library to use printf
#include <stdio.h>

// size_t is an unsigned integer type designed to represent the size of any object in bytes
typedef struct s_heap {
    // array of data
    int *data;

    // capacity is the maximum amount of elements a heap can handle
    size_t capacity;

    // size is how many elements we have in the heap right now
    size_t size;
} t_heap;

// static variable inside a function means the value of this variable will persist until the end of program
// static outside a function means this function or variable is visible inside this file only

// function to swap two values
static void swap(int *a, int *b) {
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

// function to check if the parent is greater than child we will swap
static void heapify_up(t_heap *heap, size_t i) {
    size_t parent;

    while (i > 0) {
        parent = (i - 1) / 2;

        if (heap->data[parent] > heap->data[i]) {
            // here we put & because we want the address not the value
            // because the pointer stores address
            // and we put pointer here because we want to change this in the
            // main not just a copy of it
            swap(&heap->data[parent], &heap->data[i]);
        } else
            break;
        
        i = parent;
    }
}

// if we have parent it's child left or right less than it we will swap
static void heapify_down(t_heap *heap, size_t i) {
    size_t left;
    size_t right;
    size_t smallest;

    while (1) {
        left = 2 * i + 1;
        right = 2 * i + 2;
        smallest = i;

        if (left < heap->size && heap->data[left] < heap->data[smallest]) {
            smallest = left;
        }

        if (right < heap->size && heap->data[right] < heap->data[smallest]) {
            smallest = right;
        }

        if (smallest == i)
            break;

        swap(&heap->data[i], &heap->data[smallest]);

        i = smallest;

    }
}

// initialize the heap
int heap_init(t_heap *heap, size_t capacity) {
    // we allocated a memory for the array
    heap->data = malloc(sizeof(int) * capacity);

    // if the allocation fails we will return -1
    if (!heap->data) {
        return -1;
    }

    heap->capacity = capacity;
    heap->size = 0;

    return 0;
}

// destroy the heap
void destroy_heap(t_heap *heap) {
    free(heap->data);

    heap->data = NULL;
    heap->size = 0;
    heap->capacity = 0;
}

// will give us the first element in the array
int heap_peek(t_heap *heap, int *out) {
    if (heap->size == 0)
        return -1;

    // now the out become the first element in the array
    *out = heap->data[0];

    return 0;
}

// check if the heap is empty
int heap_is_empty(t_heap *heap) {
    // if this condition is correct it will return 1
    // otherwise will return 0
    return heap->size == 0;
}

// to add a new element at the end of the heap
int heap_push(t_heap *heap, int value) {
    // if we don't have a space to add a new element
    if (heap->size == heap->capacity) {
        return -1;
    }

    heap->data[heap->size] = value;
    heapify_up(heap, heap->size);
    heap->size++;

    return 0;
}

// to remove the first element and return it
int heap_pop(t_heap *heap, int *out) {
    if (heap->size == 0)
        return -1;
 
    // here we are saving the value of the first element
    *out = heap->data[0];

    heap->size--;
    heap->data[0] = heap->data[heap->size];

    heapify_down(heap, 0);

    return (0);
}

int main(void) {
    t_heap heap;

    int val;

    // we create an array
    int values[] = { 5, 3, 9, 1, 7, 4, 6 };

    int n = 7;

    heap_init(&heap, 8);

    for (int i = 0; i < n; i++)
        heap_push(&heap, values[i]);

    printf("sorted: ");

    while (!heap_is_empty(&heap)) {
        heap_pop(&heap, &val);
        printf("%d ", val);
    }

    printf("\n");

    destroy_heap(&heap);

    return 0;
}