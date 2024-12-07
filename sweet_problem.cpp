#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,x,t,ara[3],x1,x2,l=0;
    cin>> t;
    while(t--){
        cin>>ara[0]>>ara[1]>>ara[2];
        sort(ara,ara+3);
        c=ara[0],b=ara[1],a=ara[2];
        if(a==b){
            x=a+(c/2);
            cout<<x<<'\n';
        }
        else{
            if((b+c)>(a+1)){
                l=(b+c-a)/2;
            }
            x1=c;
            a=a-c;
            x2=min(a,b);
            x=x1+x2+l;
            cout<<x<<'\n';
        }
        x=0;
        l=0;
    }
}