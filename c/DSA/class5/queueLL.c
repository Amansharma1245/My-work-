#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node * next ;
    int data;
};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int x){
        struct node *newnode ;
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->next=NULL;
        newnode->data=x;
        if(front==NULL && rear==NULL){
            rear=newnode;
            front=newnode;
        }
        else{

            rear->next=newnode;
            rear=newnode;
        }

}
void dequeue(){
    if(front==rear){
        front=NULL;
        rear=NULL;
    }
    else {
        struct node * temp;
        temp=front;
        front=front->next;
        free(temp);
    }
}
void peek(){
    if(front==NULL && rear==NULL){
        printf("Queue is empty");

    }
    else {
        printf(" \nPeek element is %d",front->data);
    }
}
void isempty(){
    if(front==NULL && rear==NULL){
        printf("Queue is empty ");
    }
    else {
        printf("\nQueue is not empty");
    }
}

void display(){
    if(front==NULL && rear==NULL){
        printf("Queue is empty ");
    }
    else {
        struct node *temp=front;
        while(temp!=NULL){
            printf(" %d ",temp->data);
                temp=temp->next;
        }
    }
}

int main (){

    enqueue(5);
    enqueue(1);
    enqueue(2);
    enqueue(4);
    enqueue(61);
    enqueue(8);
    enqueue(82);
    enqueue(81);
    enqueue(82);
    enqueue(3);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    enqueue(89);
    enqueue(77);
    display();
    peek();
    isempty();

}