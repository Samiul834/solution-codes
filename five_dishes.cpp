#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,a1,b1,c1,d1,e1,x;
    cin>>a>>b>>c>>d>>e;
    a1=a%10;b1=b%10;c1=c%10;d1=d%10;e1=e%10;
    x=10;
    if(a1==0) a1=10;
    if(b1==0) b1=10;
    if(c1==0) c1=10;
    if(d1==0) d1=10;
    if(e1==0) e1=10;
    if(a1<x)  x=a1;
    if(b1<x)  x=b1;
    if(c1<x)  x=c1;
    if(d1<x)  x=d1;
    if(e1<x)  x=e1; 
    cout<<a+b+c+d+e-a1-b1-c1-d1-e1+40+x;
}