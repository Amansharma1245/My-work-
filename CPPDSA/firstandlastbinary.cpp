#include<iostream>
using namespace std ;
int main(){
    int arr[]={0,0,1,1,2,2,2,2};
    int f=0,l=0;
    for(int i=0; i<8; i++){
        if(arr[i]==2){  f=i;
         break;}
    }
    for(int i=f; i<8; i++ ){
        if(arr[i]==2)  l=i;
    }
    cout<<"First index is "<<f<<"Second index is "<<l;
}
