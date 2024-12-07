#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count=0,x,y=0;
    cin >> n;
    int ara[n];
    cin >> ara[0];
    x=ara[0];
    for(i=1;i<n;i++){
        cin >> ara[i];
        if(ara[i]<x){
            if(count>y){
                y=count;
            }
            count=0;
            x=ara[i];
        }
        else{
            count++;
            x=ara[i];
        }
    }
    if(count>y){
        y=count;
    }

    cout << y+1;
}