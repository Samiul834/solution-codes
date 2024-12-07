#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long w,a,b,x,p;
    for(int i=1;i<=t;i++){
        cin>>w;
        cout<<"case "<<i<<": ";
        if(w%2!=0){
            cout<<"Impossible\n";
        }
        else{
            for(x=2;x<w/2;x*=2){
                a=x;
                b=w/x;
                if(b%2==1){
                    cout<< b<<" "<<a<<"\n";
                    break;
                }
            }
        }
    }
}