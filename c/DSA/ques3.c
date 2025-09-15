#include<stdio.h>
int main (){
struct number{
   int real;
   int img;
} n1,n2;

printf("Enter the real part of n1 ");

scanf("%d",&n1.real);
printf("Enter the img part of n1 ");
scanf("%d",&n1.img);

printf("Enter the real part of n2 ");

scanf("%d",&n2.real);
printf("Enter the img part of n1 ");
scanf("%d",&n2.img);

printf("Sum is %d %di \n",n1.real+n2.real,n1.img+n2.img);
printf("subtract is %d %di\n ",n1.real-n1.real,n1.img-n1.img);


    }