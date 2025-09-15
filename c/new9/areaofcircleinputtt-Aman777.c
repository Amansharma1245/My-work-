#include<stdio.h>
int main(){
struct stud {
   
    char name[30];
    int marks;
    int roll;

};

struct stud s1,s2;
printf("Enter the details of student 1\n--");
printf("Enter name :");
scanf(" %s",s1.name);
printf("Enter roll :");
scanf("  %d",&s1.roll);
printf("Enter m :");
scanf(" %d",&s1.marks);
printf("Enter the details of student 2--\n");
printf("Enter name: :");
scanf(" %s",s2.name);
printf("Enter roll :");
scanf("%d",&s2.roll);
printf("Enter marks :");
scanf(" %d",&s2.marks);
printf("----Details of student 1 ----\n");
printf(" name -%s\n",s1.name);
printf(" roll- %d\n\n",s1.roll);
printf(" marks %d",s1.marks);
printf("----Details of student 2 ----\n");
printf(" name-%s\n",s2.name);
printf(" roll- %d\n",s2.roll);
printf(" marks-%d\n",s2.marks);
if(s1.marks>s2.marks) printf("%s gets more marks than %s",s1.name,s2.name);
else  printf("%s gets more marks than %s",s2.name,s1.name);
}