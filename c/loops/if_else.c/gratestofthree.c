#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter num1 ");
    scanf("%d", &a);
    printf("enter num2");
    scanf("%d", &b);
    printf("enter num 3");
    scanf("%d", &c);
    if (a>b){
        if(a>c){printf("%d",a);}
        else {printf("%d",c);}
    }
    else {if(b>a)
             if(b>c)
             {printf("%d",b);}
             else{printf("%d",c);}
    }
  
       
       
       
        return 0;}