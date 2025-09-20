#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node * next ;
    int data;
};
struct node * top=NULL;
struct node *newnode;
void push (){
    int x;
    printf("Enter the data want to push ");
    scanf("%d",&x);
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(top==NULL){
        newnode->next=top;
        top=newnode;
      
    }
    else {
        newnode->next=top;
        top=newnode;
    }
 
}
void pop(){
    if(top==NULL){
        printf("Stack is empty ");
    }
    else {
        struct node * temp;
        temp=top;

        top=top->next;
        free(temp);
    }
}
void display (){
    struct node * temp;
    temp=top;
    while(temp!=NULL){
        printf(" %d ",temp->data);
        temp=temp->next;
    }

}
int main (){
    int choice ;
    printf("Enter 1: display 2:push a new element  3: pop an element \n ");
    scanf("%d",&choice);
    while(1){

   
    switch(choice){
        case 1 : display();
        break;
        case 2 : push ();
        break;
        case 3 : pop();
        break;
        default : printf("Error");
        break;
    }
     printf("\nEnter 1:display 2:push a new element  3: pop an element \n ");
     scanf("%d",&choice);
    }
}