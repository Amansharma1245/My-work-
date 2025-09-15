#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;

};
struct node *head = NULL;
    struct node *newnode;
    struct node *tail;
    struct node *temp;
    struct node *current;
    struct node *nextnode;

int main()
{
    
    int value;
    printf("Enter the value");
    scanf("%d", &value);
    while (value)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = NULL;
        newnode->prev=NULL;
        if (head == NULL)
        {
            head = newnode;
            tail = head; 
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        scanf("%d",&value);

    }
    
   current=nextnode=head;
   while(current!=0)
   {    
    nextnode=current->next;
    temp=current->next;
    current->next=current->prev;
    current->prev=temp;
    current=nextnode;
    

   }
   current=head;
   head=tail;
   tail=current;
  // printf("\n%d",tail->data);
//  printf("%d",tail->next->data);
   temp=head;
   while(temp!=0){
    printf("->%d",temp->data);
    temp=temp->next;
   }

}
