#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data ;
    struct Node* next;
}node;

int main (){
  node head=NULL;
  node temp=NULL;
  node newnode=NULL;

  int value;

  while(value=!-1){

    scanf("%d",&value);
    if(value==-1) break;
     
    newnode=(node)malloc(sizeof(node));
    newnode->data=value;
    newnode->next=NULL;
    if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
    printf("\nLinked list -> ");
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    return 0;

  


}