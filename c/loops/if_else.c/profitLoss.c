#include<stdio.h>
int main (){
    int cp ;
    printf("COST PRICE : ");
    scanf("%d",&cp);
    int sp;
    printf("SELLING PRICE : ");
    scanf("%d",&sp);
    int o=sp-cp;
    if (o>0){
        printf("PROFIT IS : %d",o);
    }
    if (o<0){
        o=o*(-1);
        printf("LOSS IS : %d",o);
    }








    return 0;

}