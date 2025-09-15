#include<stdio.h>
#include<string.h>
int main (){
struct student{
  char name[30];
   int roll_no;
   int marks;
} student1,student2;

printf("Enter the name of student 1 ");
scanf("%s",student1.name);
printf("Enter the roll no of student 2 ");
scanf("%d",&student1.roll_no);
printf("Enter the marks of student 2 ");
scanf("%d",&student1.marks);

printf("Enter the name of student 2 ");
scanf("%s",student2.name);
printf("Enter the roll no of student 2 ");
scanf("%d",&student2.roll_no);
printf("Enter the marks of student 2 ");
scanf("%d",&student2.marks);

printf("Detail of student 1 \n\n");
printf("Name of student 1 is %s\n",student1.name);
printf("Roll no of student 1 is %d\n",student1.roll_no);
printf("Marks of student 1 is %d\n",student1.marks);

printf("Name of student 1 is %s\n",student2.name);
printf("Roll no of student 2 is %d\n",student2.roll_no);
printf("Marks of student 2 is %d\n",student2.marks);


    }