#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
  
    int value;
    printf("Enter value to stop -1 ");
    scanf("%d", &value);
    struct node *newnode = NULL;
    struct node *head = NULL;
    struct node *temp = NULL;
    while (value != -1)
    {

    
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data=value;
        newnode->next=0;
        if (head == NULL)
        {
            head = newnode;
            temp=newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
            scanf("%d", &value);
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    // printf("\nAFTER INSERTION AT BEGINING \n");
    // int n;
    // printf("Enter the element you want to insert ");
    // scanf("%d",&n);
    // newnode=(struct node  *)malloc(sizeof(struct node));
    // newnode->data=n;
    // newnode->next=head;
    // head=newnode;
    // temp=head;
    // while (temp != NULL)
    // {
    //     printf("%d->", temp->data);
    //     temp = temp->next;
    // }
    // printf("\nAFTER INSERTION AT END \n");
    // int e;
    // printf("Enter the element you want to insert ");
    // scanf("%d",&e);
    // newnode=(struct node  *)malloc(sizeof(struct node));
    // newnode->data=e;
    // newnode->next=NULL;
    // temp=head;
    // while(temp->next!=NULL){
    //     temp=temp->next;
    // }
    // temp->next=newnode;

    // temp=head;
    // while (temp != NULL)
    // {
    //     printf("%d->", temp->data);
    //     temp = temp->next;
    // }


    // printf("\n");
    printf("\nAFTER INSERTION AT ANY POSITION \n");
    int f;
    printf("Enter the element you want to insert ");
    scanf("%d",&f);
    int pos;
    int i=1;
    printf("Enter the position ");
    scanf("%d",&pos);
    newnode=(struct node  *)malloc(sizeof(struct node));
    newnode->data=f;
    newnode->next=NULL;
    temp=head;
    while(pos>i){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    temp=head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
}