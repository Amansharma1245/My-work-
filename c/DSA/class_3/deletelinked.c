    #include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head = NULL;

    struct node *newnode = NULL;
    struct node *temp = NULL;
    struct node *prev = NULL;
    int value;
    printf("Enter the value -1 to end ");
    scanf("%d", &value);
    while (value != -1)
    {

        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = 0;
        if (head == 0)
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
     temp = head;
        while (temp != 0)
        {
            printf("->%d", temp->data);
            temp = temp->next;
        }

    // printf("\nAfter delete first element\n ");
    // temp=head;
    // head=head->next;
    // free(temp);
    //   temp = head;
    //     while (temp != 0)
    //     {
    //         printf("->%d", temp->data);
    //         temp = temp->next;
    //     }
    // printf("\nAfter delete End element\n ");
    // temp=head; 
    // while(temp->next->next!=0){
    //     temp=temp->next;
      
    // }
    // free(temp->next);
    // temp->next=NULL;
    
    // temp=head;
    //     while (temp != 0)
    //     {
    //         printf("->%d", temp->data);
    //         temp = temp->next;
    //     }
    printf("\nDelete from any position");
    int n,i=1;
    printf("Enter the position");
    scanf("%d",&n);
    temp=head;
    while(i<n-1){
        temp=temp->next;
        i++;
    }
    temp->next=temp->next->next;
    temp=head;
        while (temp != 0)
        {
            printf("->%d", temp->data);
            temp = temp->next;
        }
}