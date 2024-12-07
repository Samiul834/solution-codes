#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n;
    long long y;
    cin>>n;
    if(n%2==0){
        x=n/2;
        y=pow(2,x);
        cout<<y;
    }
    else{
        cout<<0;
    }
}