#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,n,t,i,x,a,r,days;
    cin>>t;
    while(t--){
        cin>>n>>d;
        if(d<=n){
            cout<<"YES\n";
        }
        else{
            int maxX = sqrt(d);
        bool possible = false;

        for (int x = 1; x <= maxX; x++) {
            int a = x;
            int r = d / (a + 1);
            if (d % (a + 1) != 0) r += 1;
            int days = a + r;

            if (days <= n) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        }

    }
}