#include<stdio.h>
#include<string.h>
struct book {
    char title[100];
    char author[200];
    int price;
    int page;


  };
int main(){
   struct book book1;
   book1.page=20;
   book1.title="math";
   book1.author="aman";
   book1.price=1000;
   printf("AUTHor name =%s",book1.author);
   printf("title =%s",book1.title);
   printf("page =%d",book1.page);
   printf("price =%d",book1.page);



}
