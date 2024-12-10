#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t,x;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b;
        cout<<"Case "<<i<<": ";
        if(b>=a){
            cout<<(b*4)+19<<'\n';
        }
        else{
            x=a-b;
            cout<<((x+a)*4)+19<<'\n';
        }
    }
    return 0;
}