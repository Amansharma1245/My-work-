#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *temp=NULL;
struct node *newnode=NULL;
int main (){
    int data;
    printf("Enter the data  to end list enter 0 ");
    scanf("%d",&data);
   
    while(data)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
         newnode->data=data;
    newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;

        }
        else{
                temp->next=newnode;
                temp=newnode;
        }
    scanf("%d",&data);
           
    }
    printf("After newnode at End");
    int value;
    printf("Enter the value you want to insert ");
    scanf("%d",&value);
     printf("Enter the position ");
    int pos;
    scanf("%d",&pos);
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;

    
    temp->next=newnode;
    newnode->next=head;

    temp=head;
   do{
        printf("->%d",temp->data);
        temp=temp->next;
    } while(temp!=head);

}