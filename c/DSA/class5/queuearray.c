#include<stdio.h>
#define n 5
int queue[n];
int front =-1;
int rear=-1;
void enqueue(int x){

    if(rear==n-1){
        printf("overflow");

    }
    else if(rear==-1 && front==-1){
             rear++;
             front++;
             queue[rear]=x;
    }
    else {
        rear++;
        queue[rear]=x;
    }

}
void dequeue(){
    if(front==-1){
        printf("underflow");
    }
    else if(front==rear) {
                front=rear=-1;
    }
    else {
        front++;
    }
}
void peek(){
    printf("%d",queue[front]);
}
void display(){
    int i;
    for(i=front; i<rear+1; i++){
        printf(" %d ",queue[i]);
    }
}
int main (){
    enqueue(3);
    enqueue(4);
  //  enqueue(5);aq
   // enqueue(6);
  //  enqueue(1);
    //enqueue(4);
    //enqueue(2);
    dequeue();
    dequeue();
    dequeue();
    display();
}