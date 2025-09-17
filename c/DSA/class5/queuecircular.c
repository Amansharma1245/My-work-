#include<stdio.h>
#define n 5
int cqueue[n];
int front=-1;
int rear=-1;
void enqueue (int x)
{
    if(front==-1 && rear==-1){
        front++;
        rear++;
        cqueue[rear]=x;
    }
    else if ((rear+1)%n==front){
        printf("Queue is full \n");
    }
    else {
        rear=(rear+1)%n;
        cqueue[rear]=x;
    }
   
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("Underflow ");
    }
    else if (rear==front){
        rear=-1; 
        front=-1;
    }
    else {
        front=(front+1)%n;
    }
}

void display(){
    int i=front;
    if(front==-1 && rear==-1){
        printf("No element");
    }
    else{
        while(i!=rear){
        printf(" %d ",cqueue[i]);

            i=(i+1)%n;
    }
    printf("%d",cqueue[rear]);
    }
}

int main (){
        enqueue(5);
        enqueue(2);
        enqueue(3);
      //  dequeue();
        enqueue(6);
        enqueue(7);
        enqueue(1);
        //dequeue();
       // dequeue();
        //dequeue();
        
        display();
}