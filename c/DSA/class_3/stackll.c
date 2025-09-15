#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link ;

};
struct node *top=0;
void push (int x){
  struct node *newnode;
  newnode=(struct node *)malloc(sizeof(struct node));
  newnode->data=x;
  newnode->link=top;
  top=newnode;

}
void pop(){
    struct node *temp;
   temp=top;
   top=top->link;
   free(temp);
}
void display(){
    struct node *temp;
    temp=top;
    while(temp!=0){
     printf("%d->",temp->data);
     temp=temp->link;
    }
   
}
int  main (){
    push(22);
    push(3);
    push(232);
    push(221);
    pop();
    pop();
    display();
}