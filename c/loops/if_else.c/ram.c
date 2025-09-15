#include<stdio.h>
int main (){
    int r,s,a;
    printf("AGE OF RAM : ");
    scanf("%d",&r);
    printf("AGE OF SHYAM : ");
    scanf("%d",&s);
    printf("AGE OF AJAY : ");
    scanf("%d",&a); 
    if (r<s){
        if(r<a){printf("RAM IS THE YOUNGEST");}
        else{printf("AJAY IS THE YOUNGEST ");}
    }
    else {if (s<r)  {if (s<a)
    {printf("SHYAM IS THE YOUNGEST ");}
    else {printf("AJAY IS THE YOUNGEST ");}}
    return 0;}
}