#include<stdio.h>
int main (){ 
    int a,b,c ;
    printf("ENTER AGE OF RAM : ");
    scanf("%d",&a);
     printf("ENTER AGE OF SHYAM  : ");
    scanf("%d",&b);
     printf("ENTER AGE OF AJAY : ");
    scanf("%d",&c); 
    if (a<b && a<c){
        printf("RAM IS THE YOUNGEST ");
    }
    if (b<a && b<c){
        printf("SHYAM IS THE YOUNGEST ");
    }
    if (c<b && c<a){
        printf("AJAY  IS THE YOUNGEST ");
    }

    






    return 0;

}