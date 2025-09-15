#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the number a,b,c\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("a is the greatest");
    }
    if (b > a && b > c)
    {
        printf("b is the greatst ");
    }
    if (c > a && c > a)
    {
        printf("c is the greatest ");
    }

    return 0;
}