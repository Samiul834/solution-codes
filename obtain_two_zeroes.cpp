#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,a,b,i;
    cin>>t;
    while(t--){
        cin>>x>>y;
        a=min(x,y);
        b=max(x,y);
        if(a==0&&b==0){
            cout<<"YES\n";
        }
        else if(a==0||b==0){
            cout<<"NO\n";
        }
        else if(a*2<b){
            cout<<"NO\n";
        }
        else if(a%3==0&&b%3==0){
            cout<<"YES\n";
            continue;
        }
        else if(a%3==1&&b%3==1){
            cout<<"NO\n";
        }
        else if(a%3==2&&b%3==2){
            cout<<"NO\n";
        }
        else if(a%3==0&&b%3!=0){
            cout<<"NO\n";
        }
        else if(a%3!=0&&b%3==0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}