#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;


void Insert_at_beg(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if(value%2!=0){
    newnode->data = value;
    newnode->next = head;
    head = newnode;}
}


void Insert_at_end(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        struct node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void Insert_after(int after, int value) {
    struct node *temp = head;
    while (temp != NULL && temp->data != after) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found!\n", after);
        return;
    }

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = temp->next; 
    temp->next = newnode;
}


void Delete_from_beg() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
}

void Delete_from_end() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    struct node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void Delete_by_value(int value) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    if (head->data == value) {
        struct node *temp = head;
        head = head->next;
        free(temp);
        return;
    }
    struct node *temp = head;
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }
    if (temp->next == NULL) {
        printf("Value %d not found\n", value);
        return;
    }
    struct node *del = temp->next;
    temp->next = del->next;
    free(del);
}

void Display() {
    struct node *temp = head;
    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int choice, val, after;

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
                scanf("%d", &val);
                Insert_at_beg(val);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &val);
                Insert_at_end(val);
                break;
            case 3:
                printf("Enter value after which to insert: ");
                scanf("%d", &after);
                printf("Enter new value: ");
                scanf("%d", &val);
                Insert_after(after, val);
                break;
            case 4:
                Delete_from_beg();
                break;
            case 5:
                Delete_from_end();
                break;
            case 6:
                printf("Enter value to delete: ");
                scanf("%d", &val);
                Delete_by_value(val);
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