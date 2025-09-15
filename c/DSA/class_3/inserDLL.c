#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
struct node *tail;
struct node *temp;
struct node *newnode;

int main()
{

    int value;
    printf("Enter the value of data");
    scanf("%d",&value);
    while (value)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = NULL;
        newnode->prev = NULL;
        newnode->data = value;
        if (head == NULL)
        {
            head = newnode;
            tail = head;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        scanf("%d", &value);
    }

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->next = NULL;
        newnode->prev = NULL;
    int pos;
    printf("Enter the pos");
    scanf("%d", &pos);
    int v;
    printf("Enter the value");
    scanf("%d", &v);
    int i = 2;
    newnode->data = v;
    temp = head;
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->next->prev = newnode;
    temp = head;
    while (temp!= 0)
    {
        printf("->%d", temp->data);
        temp = temp->next;
    }
}