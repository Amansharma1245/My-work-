#include<stdio.h>
int main(){
    float rate,principle,time,simpleintrest;
    printf("enter rate : ");
    scanf("%f",&rate);
    printf("enter principle : ");
    scanf("%f",&principle);
    printf("enter time :");
    scanf("%f",&time);

    simpleintrest =(rate*principle*time)/100;
    printf ("simple intrest : %f",simpleintrest);
    
}