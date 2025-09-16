#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;
};
struct node *top=NULL;

void push(){
    struct node * newnode;
   newnode=(struct node *)malloc(sizeof(struct node ));
    int value ;
    printf("Enter the value ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(top==NULL){
        top=newnode;
    }
    else {
        newnode->next=top;
        top=newnode;
    }

}
void pop(){
    if(top==NULL){
        printf("Underflow");
        }
        else {
            struct node *temp;
            temp=top;
            top=top->next;
            free(temp);
        }
}
void peek(){
    printf("peek element is %d\n",top->data);
}
void display(){
    struct node* temp;
    temp=top;
    while(temp!=NULL){
    printf("%d",temp->data);
    printf("\n");
     temp=temp->next;

}
}
int main ()
{
    push();
    push();
    push();
    push();
    push();
    pop();
    pop();
    peek();

    display();
    push();
    push();
    display();
}