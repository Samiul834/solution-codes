#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,n,x;
    cin>>h>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    x=accumulate(ara,ara+n,0);
    if(x<h){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
}