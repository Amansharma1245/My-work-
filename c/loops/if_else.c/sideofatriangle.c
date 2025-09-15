#include<stdio.h>
int main (){
    int a,b,c ;
    printf("enter the 1st side");
    scanf("%d",&a);
    printf("enter the 2nd side");
    scanf("%d",&b);
    printf("enter the 3rd side");
    scanf("%d",&c);

    if ((a+b)>c && (b+c)>a && (c+a)>b){
        printf("they can be a side of a triangle ");
    }
    else{printf("they cannot form a triangle ");
    
    }





    return 0;
}