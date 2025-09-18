#include<stdio.h>
#include<stdlib.h>
int *queue;
int front=-1;
int rear=-1;
int capacity=2;
int size=0;

void enqueue(int x){
   if(size==capacity){
    capacity=capacity*2;
     queue=(int*)realloc(queue,capacity*sizeof(int));
     
   }
   if(front==-1 && rear==-1){
        front++;
        rear++;
        queue[rear]=x;
        size++;
    }
    else{
        rear++;
         queue[rear]=x;
         
        size++;
    }

}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("Underflow");
    }
    else if (front==rear){
        front=-1;
        rear=-1;
        size=0;
        
    }
    else{
        front++;
        size--;
    }
}
void display(){
    if(front==-1) printf("Empty");
    else
    for(int i=front; i<=rear; i++){
        printf("%d  ",queue[i]);
    }
}
int main(){
    queue=(int*)malloc(capacity*sizeof(int));
    enqueue(3);
    dequeue();
    dequeue();
    display();
}