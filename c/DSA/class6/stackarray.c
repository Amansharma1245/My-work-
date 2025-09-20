#include<stdio.h>
#define n 10
int stack[n];
int top=-1;
void push(){
          int x; 
          printf("Enter the element you want to push");
          scanf("%d",&x);
        if(top==n-1){
            printf("The stack is full can't do push !\n");
        }
        else {
            top++;
            stack[top]=x;
        }
}
void pop(){
    if(top==-1){
        printf("Stack is empty can't do pop ");
    }
    else {
        top--;
    }
}
void display(){
    if(top==-1){
        printf("List is empty ");
    }
    else {
        printf("Stack element are \n");
        for(int i=top; i>=0; i--){
            printf("%3d",stack[i]);
        }
    }
}
int main (){
    int choice ;
    printf("Enter 1:display 2:push a new element  3: pop an element \n ");
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