#include<iostream>
#include<math.h>
using namespace std ;

int main (){
        int size;
        cout<<"Enter the value of size of array ";
        cin>>size;
        
        int arr[size];
        for(int i=0; i<size; i++)
        {
            cin>>arr[i];
        }
       for(int i=0; i<size; i++)
       {
        int f=0;
        for(int j=0; j<size; j++){
            if(i!=j){
             if(arr[i]==arr[j])  f=1;
            }
        }
        if(f==0) cout<<"Unique"<<arr[i]<<endl;
       }
        
return 0; 
}           