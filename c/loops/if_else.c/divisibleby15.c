#include<stdio.h>
int main ()
{
    int sec;
    printf("Enter the time in second");
    scanf("%d",&sec);
    int hour=sec/3600;
    int min=sec%3600;
    int m=min/60;
    int s=min%60;
    printf("Time is %d:%d:%d",hour,m,s);


}