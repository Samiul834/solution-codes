#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(i=0;i<n;i+=2){
        cout<<ara[i]<<" ";
    }
    if(n%2==0){
        for(i=n-1;i>0;i-=2){
            cout<<ara[i]<<" ";
        }
    }
    else{
        for(i=n-2;i>0;i-=2){
            cout<<ara[i]<<" ";
        }
    }
    return 0;
}