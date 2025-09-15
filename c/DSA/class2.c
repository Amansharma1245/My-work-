#include<stdio.h>
#include<string.h>
 typedef struct book
 {
    char author[20];
    char title[20];
    int price;
    int pages;
 } book;


int main ()
{
    book p1,p2,p3,p4;
    printf("Enter the author of book1 ");
    scanf("%s",p1.author);
    printf("Enter the title id book1  ");
    scanf("%s",p1.title);
    printf("Enter the price id book1  ");
    scanf("%d",&p1.price);
    printf("Enter the pages book1  ");
    scanf("%d",p1.pages);
    
    printf("Enter the author of book2 ");
    scanf("%s",p2.author);
    printf("Enter the title id book2  ");
    scanf("%s",p2.title);
    printf("Enter the price id book2  ");
    scanf("%d",&p2.price);
    printf("Enter the pages book2  ");
    scanf("%d",p2.pages);


    printf("Enter the author of book3 ");
    scanf("%s",p3.author);
    printf("Enter the title id book3  ");
    scanf("%s",p3.title);
    printf("Enter the price id book3  ");
    scanf("%d",&p3.price);
    printf("Enter the pages book3  ");
    scanf("%d",p3.pages);


    printf("Enter the author of book4 ");
    scanf("%s",p4.author);
    printf("Enter the title id book4  ");
    scanf("%s",p4.title);
    printf("Enter the price id book4  ");
    scanf("%d",&p4.price);
    printf("Enter the pages book4  ");
    scanf("%d",p4.pages);

    printf("Name of book 1 is %s",p1.author);
    printf("Name of title is %s\n",p1.title);
    printf("Price is %d\n ",p1.price);
    printf("pages are %d\n",p1.pages);

    printf("Name of book 2 is %s",p2.author);
    printf("Name of title is %s\n",p2.title);
    printf("Price is %d\n ",p2.price);
    printf("pages are %d\n",p2.pages);

    printf("Name of book 1 is %s",p1.author);
    printf("Name of title is %s\n",p1.title);
    printf("Price is %d\n ",p1.price);
    printf("pages are %d\n",p1.pages);
    
    printf("Name of book 1 is %s",p1.author);
    printf("Name of title is %s\n",p1.title);
    printf("Price is %d\n ",p1.price);
    printf("pages are %d\n",p1.pages);
}