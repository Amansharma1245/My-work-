#include<stdio.h>
#include<stdlib.h>

void reverselinkedlist(int)
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode = NULL;

    int value;

    printf("Enter values to store in linked list (enter -1 to stop):\n");
    

    while (1)
    {
        scanf("%d", &value);

        if (value == -1)
            break;

        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
    printf("\nLinked list -> ");
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    return 0;
}
