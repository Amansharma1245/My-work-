#include<stdio.h>
#include<stdlib.h>
 typedef struct  node{
    struct node *next ;
    int data;

} node;
node * front=NULL;
node * rear=NULL;
void enqueue (int x){
        node * newnode;
        newnode=(node *)malloc(sizeof(node));
        newnode->next=NULL;
        newnode->data=x;
        if(front==NULL&&rear==NULL){
            front=newnode;
            rear=newnode;
            rear->next=front;
            
        }
        else {
            rear->next=newnode;
            rear=newnode;
            rear->next=front;
        }
}
void dequeue(){
    node*temp=front;
    if(front==NULL &&rear==NULL){
        printf("Empty");
    }
    else if (front==rear){
        front=rear=NULL;
        free(temp);

    }
    else {
        front=front->next;
        free(temp);
        rear->next=front;
    }
}


void display(){
     node*temp=front;
do{
        printf("%d  ",temp->data);
        temp=temp->next;
    }    while(temp!=front);
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    dequeue();
    dequeue();

    display();
}