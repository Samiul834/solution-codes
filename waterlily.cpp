#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,x,ans;
    cin>>a>>b;
    x=(a*a+b*b)/(2*a);
    ans=x-a;
    cout << fixed << setprecision(13) << ans;
    return 0;

}