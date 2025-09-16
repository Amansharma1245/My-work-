#define n 5
#include<stdio.h>
int stack[n];
int top=-1;

void push (){
    int x;
    printf("Enter the value you want to push : ");
    scanf("%d",&x);
    if(top==n-1){
        printf(" stack Overflow");
    }
    else {
        top++;
        stack[top]=x;
        
    }
}
void pop(){
    if(top==-1){
        printf(" stack Underflow");
    }
    else {
        top--;
    }
}
void print(){
    
    for(int i=top; i>=0; i--){
        printf(" %d ",stack[i]);
        printf("\n");
    }
}
void peek(){
    printf("%d",stack[top]);
}
void isempty(){
    if(top==-1)
    printf("Yes empty");
    else printf("Not empty");
}
void isfull(){
    if(top==n-1)
    printf("full");
}


int main (){
    int ch;
    printf("Enter 1:push 2:pop 3:peek 4:isempty 5:isfull and 0:for exit  ");
    scanf("%d",&ch);
    do{
        switch (ch){
        case 1 : push();
        break;
        case 2 :pop();
        break;
        case 3 :peek();
        break;
        case 4 :isempty();
        break;
        case 5: isfull();
        break;
         case 6 : print();
         break;
        default : printf("invalid choice ");
       
        }
        printf("Enter the choice : ");
        scanf("%d",&ch);

    }while (ch!=0);

    }

    
