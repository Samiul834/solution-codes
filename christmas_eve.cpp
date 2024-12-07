#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,p,x;
    cin>>n>>k;
    int ara[n];
    for(i=0;i<n;i++){
        cin>>ara[i];
    }
    sort(ara,ara+n);
    x=ara[k-1]-ara[0];
    for(i=1;i<=n-k;i++){
        p=ara[i+k-1]-ara[i];
        if(p<x){
            x=p;
        }
    }
    cout<<x;
}