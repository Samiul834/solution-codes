#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j;
    long long total=0;
    cin>>n>>k;
    long long ara[n];
    for(i=0;i<n;i++){
        cin>>ara[i];
    }
    if(k==0){
        for(i=0;i<n;i++){
            total+=ara[i];
        }
        cout<<total;
        return 0;
    }
    sort(ara,ara+n);
    j=n-k;
    if(j<0){
        cout<<0;
        return 0;
    }
    for(int i=0;i<j;i++){
        total+=ara[i];
    }
    cout<<total;

}