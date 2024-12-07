#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,x,i,count=0;
    cin>>s;
    if(s==1||s==2){
        cout<<4;
        return 0;
    }
    while(1){
        if(s==4){
            cout<<count+4;
            return 0;
        }
        else if(s%2==0){
            s/=2;
            count++;
        }
        else{
            s=(3*s)+1;
            count++;
        }

    }
}