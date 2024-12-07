#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long x;
    cin>> t;
    while(t--){
        cin>> x;
        if(x>0&&x<7){
            cout<<"NO\n";
        }
        else if(x%14>0&&x%14<7){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}