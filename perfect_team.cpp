#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,t,i,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        x=min(a,b);
        i=(a+b+c)/3;
        cout<<min(i,x)<<"\n";
    }
    return 0;
    
}