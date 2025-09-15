#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;

};

int main (){
    struct node *head=NULL,*temp,*newnode=NULL;
    int value;
         scanf("%d",&value);
    while(value!=-1){
   
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
            head=newnode;
            temp=newnode;
    }
    else {
        temp->next=newnode;
        temp=newnode;
    }
     scanf("%d",&value);
}
temp=head;
while(temp!=NULL)
{
    printf("%d->",temp->data);
    temp=temp->next;

}
}