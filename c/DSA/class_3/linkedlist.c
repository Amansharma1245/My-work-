#include <stdio.h>
#include <stdlib.h>
 struct node *head = NULL;

    struct node *newnode = NULL;
    struct node *temp = NULL;
struct node
{
    int data;
    struct node *next;
};
void odd(){
     temp = head;
        while (temp != 0)
        {
            if((temp->data)%2!=0)   
            printf("->%d", temp->data);
            temp = temp->next;
        }
    

}

int main()
{
   
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
       
        printf("\nAfter function call ");
        odd();
}