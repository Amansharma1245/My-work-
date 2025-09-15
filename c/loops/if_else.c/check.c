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
    if (a > b)
              {
        if (a > c){
            printf("%d is greates", a);}

        else
        {
            printf("%d is greatest", c);
        }
    }
    else{
        if (b > a)if (b>c)
            
               { printf("%d is greatest", b);}

            else
                {printf("%d is the greatest", c);}

        return 0;
 }
}