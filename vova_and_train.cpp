#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,v,train_start,train_end,x,i,t,a,b;
    cin>>t;
    while(t--){
        cin>>l>>v>>train_start>>train_end;
        a=(train_start-1)/v;
        b=train_end/v;
        x=b-a;
        i=l/v;
        cout<<i-x<<"\n";
    }
    return 0;

}