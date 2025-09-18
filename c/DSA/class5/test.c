#include <stdio.h>
#include <stdlib.h>

int *queue;
int front = 0;       // index of first element
int rear = -1;       // index of last element
int capacity = 2;    // initial capacity
int size = 0;        // number of elements

void enqueue(int x) {
    if (size == capacity) {
        capacity *= 2;
        queue = (int*)realloc(queue, capacity * sizeof(int));
        if (queue == NULL) {
            printf("Memory allocation failed\n");
            exit(1);
        }
    }
    rear++;
    queue[rear] = x;
    size++;
}

void dequeue() {
    if (size == 0) {
        printf("Underflow\n");
        return;
    }
    front++;
    size--;
    if (size == 0) { // reset queue to initial state
        front = 0;
        rear = -1;
    }
}

void display() {
    if (size == 0) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    queue = (int*)malloc(capacity * sizeof(int));

    enqueue(3);
    dequeue();
    free(queue);
    return 0;
}
