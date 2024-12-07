#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,x,i,p;
    cin>>t;
    while(t--){
        cin>>x;
        int ara[x];
        for(i=0;i<x;i++){
            cin>>ara[i];
        }
        sort(ara,ara+x);
        a=ara[x-1];
        b=ara[x-2];
        p=x-2;
        if(x==2){
            cout<<0<<"\n";
        }
        else if(p>=b){
            cout<<b-1<<"\n";
        }
        else{
            cout<<p<<"\n";
        }
    }
}