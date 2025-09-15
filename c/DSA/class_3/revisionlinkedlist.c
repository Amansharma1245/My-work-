#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *next;
    int data;
};
void printlinkedlist(struct node *head)
{
    struct node *temp = head;
    temp = head;
    while (temp != NULL)
    {
        printf("  %d", temp->data);
        temp = temp->next;
    }
}
void deletefirst(struct node **head)
{
    struct node *temp = *head;
    *head = (*head)->next;
    free(temp);
}
void deleteend(struct node **head){
    struct node *temp=*head;
    while(temp->next->next!=0){
        temp=temp->next;
    }
    free(temp->next);
     temp->next=NULL;

}
void deleteany(struct node **head,int pos){
    struct node *temp=*head;
    struct node *prev=*head;
    int i=0;

    while( i < pos){
        prev=temp;
        temp=temp->next;
        i++;
    }
    prev->next=temp->next;
    free(temp);

}

int main()
{
    struct node *temp = NULL;
    struct node *head = NULL;
    int value;
    printf("Enter the value to stop enter -1 ");
    scanf("%d", &value);
    while (value != -1)
    {

        struct node *newnode = NULL;
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = 0;
        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        scanf("%d", &value);
    }
    printf("Before delete \n");
    printlinkedlist(head);
    printf("\nAfter delete \n");
    deletefirst(&head);
    printlinkedlist(head);
    printf("\nAfter delete end  \n");
    deleteend(&head);
    printlinkedlist(head);
     printf("\nAfter delete any postion \n");
    deleteany(&head,3);
    printlinkedlist(head);
    
}
