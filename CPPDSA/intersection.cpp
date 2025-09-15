#include<iostream>
#include<vector>
using namespace std ;
void reversevector(vector<int>& aman)
{
    for(int i=0; i<aman.size()/2; i++)
    {
            int temp=aman[i] ;
            aman[i]=aman[(aman.size())-i-1];
            aman[(aman.size())-i-1]=temp;

    }
    cout<<"Reverse element are ";
    for(int val: aman){
        cout<<val<<" ";
    }
}
int main ()
{
       vector<int>aman(5);
       cout<<"Enter the value of element"<<endl;
       for(int &val :aman){
        cin>>val;
       }
       reversevector(aman);
      
        
       
       
       

}