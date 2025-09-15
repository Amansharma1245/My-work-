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
   // newnode=(struct node *)malloc(sizeof(struct node));
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
    temp->next=head;
    temp=head;
    while(temp!=head){
        printf("->%d",temp->data);
        temp=temp->next;
    }

}