#include<stdio.h>
#define n 5
int stack[n];
int top=-1;
void push(int x){
    if(top==n-1){
        printf("Ovweflow");
    }
    else{
        top++;
        stack[top]=x;
    }
}
 void pop(){
    if(top==-1){
        printf("Underflow");

    }
    else {
        top--;
    }
 }

 void display(){
    for(int i=0; i<=top; i++){
        printf("%d ",stack[i]);
    }
 }

int main(){
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
  
    pop();
    pop();
    display();
    
    
}