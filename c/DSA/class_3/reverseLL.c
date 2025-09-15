#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node * next;
    int data ;
};
int main(){
    struct node *head=NULL;
    struct node *temp=NULL;
    struct node *newnode=NULL;
    struct node *prevnode=NULL;
    struct node *nextnode;
    struct node *currentnode;
    int value ;
    printf("Enter the data");
    scanf("%d",&value);
    while(value)
    {
            newnode=(struct node*)malloc(sizeof(struct node));
            newnode->data=value;
            if(head==NULL){
                head=newnode;
                temp=head;
            }
            else
            {
                temp->next=newnode;
                temp=newnode;
            }
              scanf("%d",&value);
              newnode->next=NULL;
    }
  
    nextnode=currentnode=head;
    while(currentnode!=NULL)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;

    }   
      temp=head=prevnode;
    while(temp!=NULL){
      printf("->%d",temp->data);
      temp=temp->next;
    }



}