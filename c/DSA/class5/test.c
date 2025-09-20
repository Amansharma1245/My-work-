#include<stdio.h>
#include<stdlib.h>
int *cqueue;
int front=-1 ;
int rear=-1;
int capacity=2;
int size=0;
void enqueue(int x){
    if(size==capacity){
        capacity=capacity*2;
        cqueue=(int *)realloc(cqueue,capacity*sizeof(int ));

    }
    if(front==-1 && rear==-1){
        front++;
        rear++;
        size++;
        cqueue[rear]=x;
    }
    else {
        rear=(rear+1)%capacity;
        cqueue[rear]=x;

    }
}
void display (){
    if(front==-1 && rear==-1){
        printf("Queue is empty ");
    }
    else {
        while()
    }
}
int main (){
    cqueue=(int *)malloc(sizeof(int ));
}