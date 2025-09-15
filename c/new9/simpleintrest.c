#include<stdio.h>
int main(){
    printf("enter p :");
    float p;
    scanf("%f",&p);
    printf("enter r :");
    float r;
    scanf("%f",&r);
    printf("enter t :");
    float t;
    scanf("%f",&t);
    printf("simple interst : ");
  
    float si=(p*r*t)/100;
    printf("%f",si);
}