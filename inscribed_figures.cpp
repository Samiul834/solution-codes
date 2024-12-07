#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,count=0;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    for(int i=0;i<n-1;i++){
        if(ara[i]+ara[i+1]==5){
            cout<<"Infinite";
            return 0;
        }
        else{
            count+=(ara[i]+ara[i+1]);
        }
    }
    for(i=0;i<n-2;i++){
        if(ara[i]==3&&ara[i+1]==1&&ara[i+2]==2){
            count-=1;
        }
    }
    cout<<"Finite\n"<<count;
}