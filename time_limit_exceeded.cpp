#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a,b,flag=0,x=2000;
    cin>>n>>t;
    while(n--){
        cin>>a>>b;
        if(b<=t){
            if(a<=x){
                x=a;
                flag=1;
            }
        }

    }
    if(flag){
            cout<<x<<'\n';
        }
        else{
            cout<<"TLE\n";
        }
}