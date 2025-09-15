#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Insert at beginning
void Insert_at_beg(int data) {
    struct Node* temp = newNode(data);

    if (head == NULL) {
        head = temp;
        head->next = head;  // Circular
    } else {
        struct Node* last = head;
        while (last->next != head)
            last = last->next;

        temp->next = head;
        last->next = temp;
        head = temp;
    }
}

// Insert at end
void Insert_at_end(int data) {
    struct Node* temp = newNode(data);

    if (head == NULL) {
        head = temp;
        head->next = head;
    } else {
        struct Node* last = head;
        while (last->next != head)
            last = last->next;

        last->next = temp;
        temp->next = head;
    }
}

// Insert after a given value
void Insert_after(int key, int data) {
    if (head == NULL) return;

    struct Node* curr = head;
    do {
        if (curr->data == key) {
            struct Node* temp = newNode(data);
            temp->next = curr->next;
            curr->next = temp;
            return;
        }
        curr = curr->next;
    } while (curr != head);
}

// Delete from beginning
void Delete_from_beg() {
    if (head == NULL) return;

    if (head->next == head) {
        free(head);
        head = NULL;
    } else {
        struct Node* last = head;
        while (last->next != head)
            last = last->next;

        struct Node* temp = head;
        head = head->next;
        last->next = head;
        free(temp);
    }
}

// Delete from end
void Delete_from_end() {
    if (head == NULL) return;

    if (head->next == head) {
        free(head);
        head = NULL;
    } else {
        struct Node* curr = head;
        struct Node* prev = NULL;

        while (curr->next != head) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = head;
        free(curr);
    }
}

// Delete by value
void Delete_by_value(int key) {
    if (head == NULL) return;

    struct Node* curr = head;
    struct Node* prev = NULL;

    do {
        if (curr->data == key) {
            if (curr == head) {
                Delete_from_beg();
                return;
            } else {
                prev->next = curr->next;
                free(curr);
                return;
            }
        }
        prev = curr;
        curr = curr->next;
    } while (curr != head);
}

// Display list
void Display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    printf("Circular Linked List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

// Main with switch case
int main() {
    int choice, value, key;

    while (1) {
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert After\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete by Value\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                Insert_at_beg(value);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                Insert_at_end(value);
                break;
            case 3:
                printf("Enter key after which to insert: ");
                scanf("%d", &key);
                printf("Enter value: ");
                scanf("%d", &value);
                Insert_after(key, value);
                break;
            case 4:
                Delete_from_beg();
                break;
            case 5:
                Delete_from_end();
                break;
            case 6:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                Delete_by_value(value);
                break;
            case 7:
                Display();
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}