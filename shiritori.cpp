#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,x,i;
    cin>>n;
    string ara[n];
    for(i=0;i<n;i++){
        cin>>ara[i];
    }
    x=ara[0].size();
    for(i=1;i<n;i++){
        if(ara[i][0]!=ara[i-1][x-1]){
            cout<<"No";
            return 0;
        }
        for(int j=0;j<i;j++){
            if(ara[i]==ara[j]){
                cout<<"No";
                return 0;
            }
        }
        x=ara[i].size();
    }
    cout<<"Yes";
    return 0;
}