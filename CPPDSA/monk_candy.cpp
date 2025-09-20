#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of bags";
    cin>>n;
    int k;
    cout<<"Enter the time in min ";
    cin>>k;
    multiset<int>bag;
    for(int i=0; i<n; i++){
        int candy ;
        cout<<"Enter the number of candy"<<endl;
        cin>>candy;
        bag.insert(candy);
    }
    int totalcandy=0;
    for(int i=0; i<k; i++){
            auto it =(--bag.end());
            totalcandy=totalcandy+(*it);
            bag.erase(it);
            bag.insert(*it/2);
    }
    cout<<totalcandy;
}