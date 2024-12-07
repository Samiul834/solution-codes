#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,x,i;
    cin>>t;
    for(i=1;i<=t;i++){
        int flag=1;
        string ara;
        cin>>ara;
        cout<<"Case "<<i<<": ";
        x=ara.size();
        for(int j=0;j<(x+1)/2;j++){
            if(ara[j]!=ara[x-1-j]){
                cout<<"No\n";
                flag=0;
            }
        }
        if(flag){
            cout<<"Yes\n";
        }
    }
    return 0;
}