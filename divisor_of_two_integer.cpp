#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,x,i,y,compare=0;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    sort(ara,ara+n);
    x=ara[n-1];
    for(i=0;i<n;i++){
        if(compare==ara[i]){
            continue;
        }
        if(x%ara[i]==0){
            compare=ara[i];
            ara[i]=0;
        }
    }
    sort(ara,ara+n);
    y=ara[n-1];
    cout<<x<<" "<<y;
}