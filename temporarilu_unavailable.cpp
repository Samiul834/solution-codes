#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i,t,a,b,c,y,r,cover1,cover2;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> r;
        if (a > b) swap(a, b);
       x=c-r;
       y=c+r;
       cover1=max(a,x);
       cover2=min(b,y);
       int tota_length=max(0,cover2-cover1);
       int uncover=(b-a)-tota_length;
       cout << uncover <<'\n';
    }
}