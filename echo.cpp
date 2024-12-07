#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,y;
    cin>>n;
    string ara;
    cin >> ara;
    if(n%2==1){
        cout<<"No";
        return 0;
    }
    x=n/2;
    y=x;
    for(i=0;i<x;i++,y++){
        if(ara[i]!=ara[y]){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}