#include<iostream>
using namespace std ;
int f(int a ){
    if(a==1 ||a==2) return 1;
    return f(a-1)+f(a-2);
    
   
    
}
int main(){
    
    int a;
    cout<<"Enter number";
    cin>>a;
    

   int fibb=f(a);
    cout<<fibb;

   
        
}