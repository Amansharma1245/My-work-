#include<bits/stdc++.h>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number of student ";
    cin>>n;
    map<int,multiset<string>> st;
    for(int i=0; i<n; i++){
        int marks;
         cout<<"Enter the marks ";
        cin>>marks;
        string s ;
        cout<<"Enter the name of std \n";
        cin>>s;
        st[-1*marks].insert(s);
        
    }/*
    auto cu=--(st.end());
    while(true){
        auto &std=(*cu).second;
        int mar =(*cu).first;
        for(auto stu : std){
            cout<< stu<<"  "<<mar<<endl;
        }
        if(cu==st.begin()) break;
        cu--;
    }
        */

    //--printing 
//     auto    la=--st.end();

//     while(true){
//     for(auto &mar : (*la).second ){
//         cout<<mar<<" "<<(*la).first<<endl;
//     }
//     if(la==st.begin()) break;
//     la--;

// }
  for(auto mark_studpair : st){
      auto &name=mark_studpair.second;
      for(auto nm : name){
        cout<<nm<<"  "<<-1*mark_studpair.first<<endl;
      }

  }



}